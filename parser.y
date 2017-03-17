%{
/****************************************************************************
token.y
ParserWizard generated YACC file.

Date: 2016Äê11ÔÂ8ÈÕ
****************************************************************************/

#include "lexer.h"
#include"TreeNode.h"

static TreeNode * root
%}

/////////////////////////////////////////////////////////////////////////////
// declarations section

// attribute type
%include {
#ifndef YYSTYPE
#define YYSTYPE TreeNode *
#endif
}

// place any declarations here
%token	ID INT FOR WHILE IF LB RB SEMI TYPE COM ELSE

%right	ASSIGN
%left	EQ
%left	ADD SUB
%left	MUL DIV
%nonassoc LE RE
%nonassoc UMINUS

%start program


%%

/////////////////////////////////////////////////////////////////////////////
// rules section

// place your YACC rules here (there must be at least one)


program		:	stmt_seq			{root = $1;}
			;

stmt_seq	:	stmt_seq stmt		{YYSTYPE t = $1;
										if (t!=NULL)
										{
											while(t->sibling)
												t = t->sibling;
											t->sibling = $3;
											$$=$1;
										}
										else
											$$=$3;
									}
			|	stmt				{$$=$1;}
			;	
		
stmt		:	for_stmt			{ $$ = $1; }
			|	while_stmt			{ $$ = $1; }
			|	if_stmt				{ $$ = $1; }
			|	assign_stmt			{ $$ = $1; }
			|	LB stmt_seq RB		{ $$ = $2; }
			|	decl_stmt			{ $$ = $1; }
			|	SEMI				{ $$ = newStmtNode(EmptyK); }
			|	expr SEMI			{ $$ = $1; }
			|	error				{ $$ = NULL; }
			;

decl_stmt	:	TYPE idlist SEMI
			;

idlist		:	idlist COM ID
			|	ID
			;


assign_stmt	:	ID ASSIGN expr SEMI
			;

if_stmt		:	IF LE expr RE stmt_seq
			|	IF LE expr RE stmt_seq ELSE stmt_seq
			;

for_stmt	:	FOR LE expr SEMI expr SEMI expr RE stmt_seq
			;

while_stmt	:	WHILE LE expr RE stmt_seq
			;
			

expr		:	expr EQ expr
			|	expr ADD expr
			|	expr SUB expr
			|	expr MUL expr
			|	expr DIV expr
			|	SUB expr %prec UMINUS
			|	LE expr RE
			|	ID
			|	INT
			;




%%

/////////////////////////////////////////////////////////////////////////////
// programs section

int main(void)
{
	yyparse();
	system("Pause");
	return 0;
}

