
%{

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "koala_includes.h"

int yyerror(const char *str);
int yylex(void);

%}

%union {
  string ident;
  int primitive_type;
  uint64 ival;
  float64 fval;
  string string_literal;
  int dims;
  base_type_t base_type;
  string string_array_2[2];
  name_type_t *name_type;
  type_t type;
  linked_list_t *linked_list;
  expr_t *expr;
  term_t term;
  trailer_t *trailer;
  anonymous_function_t *anonymous;
  array_object_t *array_object;
  compound_op_t compound_op;
}

%token ELLIPSIS

/* 算术运算和位运算 */
%token TYPELESS_ASSIGN
%token PLUS_ASSGIN
%token MINUS_ASSIGN
%token TIMES_ASSIGN
%token DIVIDE_ASSIGN
%token MOD_ASSIGN
%token AND_ASSIGN
%token OR_ASSIGN
%token XOR_ASSIGN
%token RIGHT_SHIFT_ASSIGN
%token LEFT_SHIFT_ASSIGN

%token EQ
%token NE
%token GE
%token LE
%token AND
%token OR
%token NOT
%token SHIFT_LEFT
%token SHIFT_RIGHT
%token INC
%token DEC

%token IF
%token ELSE
%token WHILE
%token DO
%token FOR
%token IN
%token SWITCH
%token CASE
%token BREAK
%token FALLTHROUGH
%token CONTINUE
%token DEFAULT
%token VAR
%token FUNC
%token RETURN
%token STRUCT
%token INTERFACE
%token TYPE
%token CONST
%token PACKAGE
%token IMPORT
%token AS
%token NEW
%token FUNC_HEADER

%token INT8
%token INT16
%token INT32
%token INT64
%token UINT8
%token UINT16
%token UINT32
%token UINT64
%token FLOAT32
%token FLOAT64
%token BOOL
%token STRING
%token ROOT_OBJECT
%token <dims> DIMS

%token SELF
%token TOKEN_NIL
%token TOKEN_TRUE
%token TOKEN_FALSE

%token <ival> INTEGER
%token <ival> HEX
%token <ival> OCT
%token <fval> FLOAT

%token <string_literal> STRING_LITERAL
%token <ident> ID

/*--------------------------------------------------------------------------*/

%nonassoc ELSE

%precedence ID
%precedence '.'

%precedence ')'
%precedence '('

//%expect 2

/*--------------------------------------------------------------------------*/
%type <primitive_type> PrimitiveType
%type <string_array_2> ModuleType
%type <base_type> FunctionType
%type <base_type> BaseType
%type <name_type> TypeName

%type <expr> ConstDeclaration
%type <expr> VariableDeclaration
%type <linked_list> VariableInitializerList
%type <linked_list> ArrayInitializerList
%type <expr> VariableInitializer

/* expressiont with linked list*/
%type <linked_list> TypeNameList
%type <linked_list> VariableList
%type <linked_list> ParameterList
%type <linked_list> ReturnTypeList
%type <linked_list> LocalVariableDeclsOrStatements

%type <expr> CodeBlock
%type <expr> LocalVariableDeclOrStatement
%type <expr> Statement
%type <expr> ExpressionStatement

%type <compound_op> CompoundOperator
%type <linked_list> ExpressionList
%type <linked_list> PostfixExpressionList
%type <expr> AssignmentExpression
%type <expr> Expression
%type <expr> LogicalOrExpression
%type <expr> LogicalAndExpression
%type <expr> InclusiveOrExpression
%type <expr> ExclusiveOrExpression
%type <expr> AndExpression
%type <expr> EqualityExpression
%type <expr> RelationalExpression
%type <expr> ShiftExpression
%type <expr> AdditiveExpression
%type <expr> MultiplicativeExpression
%type <expr> UnaryExpression
%type <expr> PostfixExpression
%type <expr> PrimaryExpression
%type <expr> Term
%type <expr> Literal

%type <anonymous> AnonymousFunctionDeclaration

%type <linked_list> TrailerList
%type <trailer> Trailer

%start CompileUnit

%%

ModulePathName
  : ID {
    //$$ = null;
  }
  | ModulePathName '.' ID {
    //$$ = null;
  }
  ;

TypeNameList
  : TypeName {
    $$ = new_linked_list();
    linked_list_add_tail($$, $1);
  }
  | TypeNameList ',' TypeName {
    linked_list_add_tail($1, $3);
    $$ = $1;
  }
  ;

TypeName
  : BaseType {
    $$ = new_name_type(0, $1);
  }
  | DIMS BaseType {
    $$ = new_name_type($1, $2);
  }
  ;

BaseType
  : PrimitiveType {
    $$ = primitive_type($1);
  }
  | ModuleType {
    $$ = module_type($1);
  }
  | FunctionType {
    $$ = $1;
  }
  ;

PrimitiveType
  : UINT8 {
    $$ = TYPE_UINT8;
  }
  | UINT16 {
    $$ = TYPE_UINT16;
  }
  | UINT32 {
    $$ = TYPE_UINT32;
  }
  | UINT64 {
    $$ = TYPE_UINT64;
  }
  | INT8 {
    $$ = TYPE_INT8;
  }
  | INT16 {
    $$ = TYPE_INT16;
  }
  | INT32 {
    $$ = TYPE_INT32;
  }
  | INT64 {
    $$ = TYPE_INT64;
  }
  | FLOAT32 {
    $$ = TYPE_FLOAT32;
  }
  | FLOAT64 {
    $$ = TYPE_FLOAT64;
  }
  | BOOL {
    $$ = TYPE_BOOL;
  }
  | STRING {
    $$ = TYPE_STRING;
  }
  | ROOT_OBJECT {
    $$ = TYPE_ROOT_OBJECT;
  }
  ;

ModuleType
  : ID '.' ID {
    //outf("Module:%s, TypeName:%s\n", $1.val, $3.val);
    $$[0] = $1; $$[1] = $3;
  }
  | ID {
    //outf("TypeName:%s\n", $1.val);
    $$[0].val = null;
    $$[0].len = 0;
    $$[1] = $1;
  }
  ;

FunctionType
  : FUNC '(' ')' ReturnTypeList {
    $$ = func_type(null, $4);
    free_linked_list($4);
  }
  | FUNC '(' ')' {
    $$ = func_type(null, null);
  }
  | FUNC '(' TypeNameList ')' ReturnTypeList {
    $$ = func_type($3, $5);
    free_linked_list($3);
    free_linked_list($5);
  }
  | FUNC '(' TypeNameList ')' {
    $$ = func_type($3, null);
    free_linked_list($3);
  }
  ;

ReturnTypeList
  : TypeName {
    $$ = new_linked_list();
    linked_list_add_tail($$, $1);
  }
  | '(' TypeNameList ')' {
    $$ = $2;
  }
  ;

/*--------------------------------------------------------------------------*/
CompileUnit
  : PackageDeclaration ImportDeclarations Declarations
  | PackageDeclaration ImportDeclarations
  | PackageDeclaration                    Declarations
  |                    ImportDeclarations Declarations
  | PackageDeclaration
  |                    ImportDeclarations
  |                                       Declarations
  ;

PackageDeclaration
  : PACKAGE ModulePathName SemiOrEmpty
  ;

ImportDeclarations
  : ImportDeclaration
  | ImportDeclarations ImportDeclaration
  ;

ImportDeclaration
  : IMPORT ModulePathName SemiOrEmpty
  | IMPORT ModulePathName AS ID SemiOrEmpty
  | IMPORT ModulePathName '.' '*' SemiOrEmpty
  ;

Declarations
  : Declaration
  | Declarations Declaration
  ;

Declaration
  : ConstDeclaration {
    show_expr($1);
    outs("\n");
  }
  | VariableDeclaration {
    show_expr($1);
    outs("\n");
  }
  | TypeDeclaration
  | FunctionDeclaration
  ;

/*--------------------------------------------------------------------------.
|  |
|                                                     |
`--------------------------------------------------------------------------*/
ConstDeclaration
  : CONST VariableList '=' VariableInitializerList ';' {
    $$ = build_variable_declaration($2, null, $4, true);
    free_linked_list($2);
    free_linked_list($4);
  }
  | CONST VariableList TypeName '=' VariableInitializerList ';' {
    $$ = build_variable_declaration($2, $3, $5, true);
    free_linked_list($2);
    free_linked_list($5);
  }
  ;

VariableDeclaration
  : VAR VariableList TypeName ';' {
    $$ = build_variable_declaration($2, $3, null, false);
    free_linked_list($2);
  }
  | VAR VariableList '=' VariableInitializerList ';' {
    $$ = build_variable_declaration($2, null, $4, false);
    free_linked_list($2);
    free_linked_list($4);
  }
  | VAR VariableList TypeName '=' VariableInitializerList ';' {
    $$ = build_variable_declaration($2, $3, $5, false);
    free_linked_list($2);
    free_linked_list($5);
  }
  ;

VariableList
  : ID {
    $$ = new_linked_list();
    linked_list_add_tail($$, new_variable($1, null));
  }
  | VariableList ',' ID {
    linked_list_add_tail($1, new_variable($3, null));
    $$ = $1;
  }
  ;

VariableInitializerList
  : ArrayInitializerList {
    $$ = $1;
  }
  ;

VariableInitializer
  : Expression {
    $$ = $1;
  }
  | '{' ArrayInitializerList '}' {
    $$ = new_exp_seq($2);
    free_linked_list($2);
  }
  ;

ArrayInitializerList
  : VariableInitializer {
    $$ = new_linked_list();
    linked_list_add_tail($$, $1);
  }
  | ArrayInitializerList ',' VariableInitializer {
    linked_list_add_tail($1, $3);
    $$ = $1;
  }
  ;

/*--------------------------------------------------------------------------*/

SemiOrEmpty
  : %empty
  | ';'
  ;

TypeDeclaration
  : TYPE ID STRUCT '{' MemberDeclarations '}' SemiOrEmpty
  | TYPE ID INTERFACE '{' InterfaceFunctionDeclarations '}' SemiOrEmpty
  | TYPE ID TypeName ';'
  ;

MemberDeclarations
  : MemberDeclaration
  | MemberDeclarations MemberDeclaration
  ;

MemberDeclaration
  : FieldDeclaration
  | MethodDeclaration
  ;

FieldDeclaration
  : VAR ID TypeName ';'
  | ID TypeName ';'
  ;

MethodDeclaration
  : MethodDeclarationHeader1 CodeBlock
  ;

MethodDeclarationHeader1
  : FUNC ID '(' ')' ReturnTypeList
  | FUNC ID '(' ')'
  | FUNC ID '(' ParameterList ')' ReturnTypeList
  | FUNC ID '(' ParameterList ')'
  | ID '(' ')' ReturnTypeList
  | ID '(' ')'
  | ID '(' ParameterList ')' ReturnTypeList
  | ID '(' ParameterList ')'
  ;

MethodDeclarationHeader2
  : FUNC ID '(' TypeNameList ')' ReturnTypeList
  | FUNC ID '(' TypeNameList ')'
  | ID '(' TypeNameList ')' ReturnTypeList
  | ID '(' TypeNameList ')'
  ;

ParameterList
  : ID TypeName {
    $$ = new_linked_list();
    linked_list_add_tail($$, new_variable($1, $2));
  }
  | ParameterList ',' ID TypeName {
    linked_list_add_tail($1, new_variable($3, $4));
    $$ = $1;
  }
  ;

InterfaceFunctionDeclarations
  : InterfaceFunctionDeclaration
  | InterfaceFunctionDeclarations InterfaceFunctionDeclaration
  ;

InterfaceFunctionDeclaration
  : MethodDeclarationHeader1 ';'
  | MethodDeclarationHeader2 ';'
  ;

/*--------------------------------------------------------------------------*/

FunctionDeclaration
  : FUNC ID '(' ')' ReturnTypeList CodeBlock
  | FUNC ID '(' ')' CodeBlock
  | FUNC ID '(' ParameterList ')' ReturnTypeList CodeBlock
  | FUNC ID '(' ParameterList ')' CodeBlock
  ;

AnonymousFunctionDeclaration
  : FUNC '(' ')' ReturnTypeList CodeBlock {
    $$ = new_anonymous_func(null, $4, $5);
    free_linked_list($4);
  }
  | FUNC '(' ')' CodeBlock {
    $$ = new_anonymous_func(null, null, $4);
  }
  | FUNC '(' ParameterList ')' ReturnTypeList CodeBlock {
    $$ = new_anonymous_func($3, $5, $6);
    free_linked_list($3);
    free_linked_list($5);
  }
  | FUNC '(' ParameterList ')' CodeBlock {
    $$ = new_anonymous_func($3, null, $5);
    free_linked_list($3);
  }
  ;

/*--------------------------------------------------------------------------*/
CodeBlock
  : '{' LocalVariableDeclsOrStatements '}' {
    $$ = new_exp_seq($2);
    free_linked_list($2);
  }
  | '{' '}' {
    $$ = new_exp_seq(null);
  }
  ;

LocalVariableDeclsOrStatements
  : LocalVariableDeclOrStatement {
    $$ = new_linked_list();
    linked_list_add_tail($$, $1);
  }
  | LocalVariableDeclsOrStatements LocalVariableDeclOrStatement {
    linked_list_add_tail($1, $2);
    $$ = $1;
  }
  ;

LocalVariableDeclOrStatement
  : VariableDeclaration {
    $$ = $1;
    show_expr($1);
    outs("\n");
  }
  | Statement {
    $$ = $1;
  }
  ;

Statement
  : ExpressionStatement ';' {
    $$ = $1;
    show_expr($1);
    outs("\n");
  }
  | SelectionStatement {

  }
  | IterationStatemnet {

  }
  | JumpStatement {

  }
  | CodeBlock {
    $$ = $1;
  }
  ;

ExpressionStatement
  : Expression {
    $$ = $1;
  }
  | AssignmentExpression {
    $$ = $1;
  }
  ;

SelectionStatement
  : IfStatement
  | SwitchStatement
  ;

IfStatement
  : IF '(' Expression ')' CodeBlock
  | IF '(' Expression ')' CodeBlock ELSE CodeBlock
  | IF '(' Expression ')' CodeBlock ELSE IfStatement
  ;

SwitchStatement
  : SWITCH '(' Expression ')' CodeBlock
  ;

IterationStatemnet
  : WHILE '(' Expression ')' CodeBlock
  | DO CodeBlock WHILE '(' Expression ')' ';'
  | FOR '(' ForInit ForExpr ForIncr ')' CodeBlock
  ;

ForInit
  : ExpressionStatement ';'
  | VariableDeclaration
  | ';'
  ;

ForExpr
  : Expression ';'
  | ';'
  ;

ForIncr
  : ExpressionStatement
  ;

JumpStatement
  : BREAK ';'
  | FALLTHROUGH ';'
  | CONTINUE ';'
  | RETURN ';' {
    outs("return----\n");
  }
  | RETURN ExpressionList ';' {
    outs("return----\n");
  }
  ;

ExpressionList
  : Expression {
    $$ = new_linked_list();
    linked_list_add_tail($$, $1);
  }
  | ExpressionList ',' Expression {
    linked_list_add_tail($1, $3);
    $$ = $1;
  }
  ;

/*-------------------------------------------------------------------------*/

PrimaryExpression
  : Term {
    $$ = $1;
  }
  | Term TrailerList {
    $$ = $1;
    LINKED_LIST_MERGE_TAIL(&$$->term.trailer_list, $2);
    free_linked_list($2);
  }
  ;

Term
  : ID {
    $$ = new_exp_term_id($1);
  }
  | SELF {
    $$ = new_exp_term_self();
  }
  | Literal {
    $$ = $1;
  }
  | PrimitiveType '(' Literal ')' {
    check_primitive_type($1, $3->term);
    $$ = $3;
  }
  | '(' Expression ')' {
    $$ = new_exp_term_exp($2);
  }
  | AnonymousFunctionDeclaration {
    $$ = new_exp_term_anonymous($1);
  }
  | DimExprs BaseType {}
  | DimExprs DIMS BaseType {}
  | DimExprs BaseType '{' ArrayInitializerList '}' {}
  | DimExprs DIMS BaseType '{' ArrayInitializerList '}' {}
  | DIMS BaseType '{' ArrayInitializerList '}' {}
  ;

Literal  //常量允许访问成员变量和成员方法，不允许数组操作
  : INTEGER {
    $$ = new_exp_term_uint($1);
  }
  | FLOAT {
    $$ = new_exp_term_float($1);
  }
  | STRING_LITERAL {
    $$ = new_exp_term_string($1);
  }
  | TOKEN_NIL {
    $$ = new_exp_term_null();
  }
  | TOKEN_TRUE {
    $$ = new_exp_term_bool(true);
  }
  | TOKEN_FALSE {
    $$ = new_exp_term_bool(false);
  }
  ;

DimExprs
  : DimExpr
  | DimExprs DimExpr
  ;

DimExpr
  : '[' Expression ']'
  ;

TrailerList
  : Trailer {
    $$ = new_linked_list();
    linked_list_add_tail($$, $1);
  }
  | TrailerList Trailer {
    linked_list_add_tail($1, $2);
    $$ = $1;
  }
  ;

Trailer
  : '.' ID {
    $$ = new_trailer_field_access($2);
  }
  | '[' Expression ']' {
    $$ = new_trailer_array_access($2);
  }
  | '(' ExpressionList ')' {
    $$ = new_trailer_func_call($2);
    free_linked_list($2);
  }
  | '(' ')' {
    $$ = new_trailer_func_call(null);
  }
  | '(' ')' '{' FunctionDeclarationList '}' {
    $$ = new_trailer_interface_implementation();
  }
  ;

FunctionDeclarationList
  : FunctionDeclaration
  | FunctionDeclarationList FunctionDeclaration
  ;

PostfixExpression
  : PrimaryExpression {
    $$ = $1;
  }
  | PostfixExpression INC {
    $$ = new_exp_unary(OP_INC_AFTER, $1);
  }
  | PostfixExpression DEC {
    $$ = new_exp_unary(OP_DEC_AFTER, $1);
  }
  ;

UnaryExpression
  : PostfixExpression {
    $$ = $1;
  }
  | INC UnaryExpression {
    if ($2->kind != EXP_TERM) {
      yyerror("error: rvalue required as increment operand\n");
      exit(-1);
    } else {
      $$ = new_exp_unary(OP_INC_BEFORE, $2);
    }
  }
  | DEC UnaryExpression {
    if ($2->kind != EXP_TERM) {
      yyerror("error: rvalue required as decrement operand\n");
      exit(-1);
    } else {
      $$ = new_exp_unary(OP_DEC_BEFORE, $2);
    }
  }
  | '+' UnaryExpression {
    $$ = $2;
  }
  | '-' UnaryExpression {
    $$ = new_exp_unary(OP_MINUS, $2);
  }
  | '~' UnaryExpression {
    $$ = new_exp_unary(OP_BNOT, $2);
  }
  | '!' UnaryExpression {
    $$ = new_exp_unary(OP_LNOT, $2);
  }
  ;

MultiplicativeExpression
  : UnaryExpression {
    $$ = $1;
  }
  | MultiplicativeExpression '*' UnaryExpression {
    $$ = new_exp_binary(OP_TIMES, $1, $3);
  }
  | MultiplicativeExpression '/' UnaryExpression {
    $$ = new_exp_binary(OP_DIVIDE, $1, $3);
  }
  | MultiplicativeExpression '%' UnaryExpression {
    $$ = new_exp_binary(OP_MOD, $1, $3);
  }
  ;

AdditiveExpression
  : MultiplicativeExpression {
    $$ = $1;
  }
  | AdditiveExpression '+' MultiplicativeExpression {
    $$ = new_exp_binary(OP_PLUS, $1, $3);
  }
  | AdditiveExpression '-' MultiplicativeExpression {
    $$ = new_exp_binary(OP_MINUS, $1, $3);
  }
  ;

ShiftExpression
  : AdditiveExpression {
    $$ = $1;
  }
  | ShiftExpression SHIFT_LEFT AdditiveExpression {
    $$ = new_exp_binary(OP_LSHIFT, $1, $3);
  }
  | ShiftExpression SHIFT_RIGHT AdditiveExpression {
    $$ = new_exp_binary(OP_RSHIFT, $1, $3);
  }
  ;

RelationalExpression
  : ShiftExpression {
    $$ = $1;
  }
  | RelationalExpression '<' ShiftExpression {
    $$ = new_exp_binary(OP_LT, $1, $3);
  }
  | RelationalExpression '>' ShiftExpression {
    $$ = new_exp_binary(OP_GT, $1, $3);
  }
  | RelationalExpression LE  ShiftExpression {
    $$ = new_exp_binary(OP_LE, $1, $3);
  }
  | RelationalExpression GE  ShiftExpression {
    $$ = new_exp_binary(OP_GE, $1, $3);
  }
  ;

EqualityExpression
  : RelationalExpression {
    $$ = $1;
  }
  | EqualityExpression EQ RelationalExpression {
    $$ = new_exp_binary(OP_EQ, $1, $3);
  }
  | EqualityExpression NE RelationalExpression {
    $$ = new_exp_binary(OP_NEQ, $1, $3);
  }
  ;

AndExpression
  : EqualityExpression {
    $$ = $1;
  }
  | AndExpression '&' EqualityExpression {
    $$ = new_exp_binary(OP_BAND, $1, $3);
  }
  ;

ExclusiveOrExpression
  : AndExpression {
    $$ = $1;
  }
  | ExclusiveOrExpression '^' AndExpression {
    $$ = new_exp_binary(OP_BXOR, $1, $3);
  }
  ;

InclusiveOrExpression
  : ExclusiveOrExpression {
    $$ = $1;
  }
  | InclusiveOrExpression '|' ExclusiveOrExpression {
    $$ = new_exp_binary(OP_BOR, $1, $3);
  }
  ;

LogicalAndExpression
  : InclusiveOrExpression {
    $$ = $1;
  }
  | LogicalAndExpression AND InclusiveOrExpression {
    $$ = new_exp_binary(OP_LAND, $1, $3);
  }
  ;

LogicalOrExpression
  : LogicalAndExpression {
    $$ = $1;
  }
  | LogicalOrExpression OR LogicalAndExpression {
    $$ = new_exp_binary(OP_LOR, $1, $3);
  }
  ;

Expression
  : LogicalOrExpression {
    $$ = $1;
  }
  ;

/*--------------------------------------------------------------------------*/

AssignmentExpression
  : PostfixExpressionList '=' VariableInitializerList {
    $$ = new_exp_assign_list($1, $3);
    free_linked_list($1);
    free_linked_list($3);
  }
  | PostfixExpression CompoundOperator VariableInitializer {
    $$ = new_exp_compound_assign($2, $1, $3);
  }
  ;

PostfixExpressionList
  : PostfixExpression {
    $$ = new_linked_list();
    linked_list_add_tail($$, $1);
  }
  | PostfixExpressionList ',' PostfixExpression {
    linked_list_add_tail($1, $3);
    $$ = $1;
  }
  ;

/* 算术运算和位运算 */
CompoundOperator
  : PLUS_ASSGIN {
    $$ = OP_PLUS_ASSIGN;
  }
  | MINUS_ASSIGN {
    $$ = OP_MINUS_ASSIGN;
  }
  | TIMES_ASSIGN {
    $$ = OP_TIMES_ASSIGN;
  }
  | DIVIDE_ASSIGN {
    $$ = OP_DIVIDE_ASSIGN;
  }
  | MOD_ASSIGN {
    $$ = OP_MOD_ASSIGN;
  }
  | AND_ASSIGN {
    $$ = OP_AND_ASSIGN;
  }
  | OR_ASSIGN {
    $$ = OP_OR_ASSIGN;
  }
  | XOR_ASSIGN {
    $$ = OP_XOR_ASSIGN;
  }
  | RIGHT_SHIFT_ASSIGN {
    $$ = OP_RIGHT_SHIFT_ASSIGN;
  }
  | LEFT_SHIFT_ASSIGN {
    $$ = OP_LEFT_SHIFT_ASSIGN;
  }
  | TYPELESS_ASSIGN {
    $$ = OP_TYPELESS_ASSIGN;
  }
  ;

/*--------------------------------------------------------------------------*/

%%
