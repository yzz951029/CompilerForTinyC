%{
/****************************************************************************
_parser.y
ParserWizard generated YACC file.

Date: 2016Äê11ÔÂ22ÈÕ
****************************************************************************/
#include"_parser.h"
#include "_lexer.h"
#include"TreeNode.h"
#include "SymTab.h"
#include"genCode.h"
extern int lineNum;
extern char recordString[MAXBUFF];
extern int recordInt;
extern char recordChar;
extern ExpType declareType;
static TreeNode * root;
static char *savedName;
static int savedLineno;
#define FileBuff 200
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
%token	ID INT FOR WHILE IF LB RB SEMI TYPE COM ELSE MAIN CHAR OUTPUT INPUT SADD_F SADD_B SSUB_F SSUB_B

%right	ASSIGN

%left	OR
%left	AND
%left	bOR
%left	bXOR
%left	bAND
%left	EQ NEQ
%left	LT	GT	LTE GTE
%left   LS	RS
%left	ADD SUB
%left	MUL DIV MOD
%left	bNOT SADD SSUB NOT 
%nonassoc UMINUS
%nonassoc LE RE


%start program


%%

/////////////////////////////////////////////////////////////////////////////
// rules section

// place your YACC rules here (there must be at least one)


program		:	MAIN LE RE LB stmt_seq RB			{root = $5;}
			;

stmt_seq	:	stmt_seq stmt		{YYSTYPE t = $1;
										if (t!=NULL)
										{
											while(t->sibling)
												t = t->sibling;
											t->sibling = $2;
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
			//|	assign_stmt			{ $$ = $1; }
			|	LB stmt_seq RB		{ $$ = $2; }
			|	decl_stmt			{ $$ = $1; }
			|	SEMI				{ $$ = newStmtNode(EmptyK); }
			|	expr SEMI			{ $$ = $1; }
			|						{ $$ = NULL;}
			|	error				{ $$ = NULL; }
			|	output_stmt			{ $$ = $1;}
			|	input_stmt			{ $$ = $1;}
			;
			
output_stmt	:	OUTPUT LE expr RE SEMI{	$$ = newStmtNode(OutputK);
										$$->child[0] = $3;
									}
			;
			
input_stmt	:	INPUT LE expr RE SEMI	{	$$ = newStmtNode(InputK);
										$$->child[0] = $3;
									}
			;

decl_stmt	:	TYPE idlist SEMI	{	$$ = newStmtNode(DeclK);
										$$->child[0]=$2;
										$$->attr.name=copyString(recordString);//TODO:TYPE need to return type name.replace ???Finished
									}
			;

idlist		:	idlist COM ID		{	printf("IN idlist\n");
										$$ = newExpNode(IdlistK);
										$$->type = declareType;
										$$->child[0]=$1;
										//$$->attr.name=???;TODO:ID need to return id name.replace ???Finished
										$3 = newExpNode(IdK);
										$3->attr.name=copyString(recordString);
										$3->type = declareType;
										$$->child[1]=$3;
										if(insert(&symbol_table,recordString,declareType))
											printf("insert OK");
										else
											printf("insert failed");
									}
			|	idlist COM init			{	$$ = newExpNode(IdlistK);
											$$->type = declareType;
											$$->child[0] = $1;
											$$->child[1] = $3;
											//$$->attr.name = "=";
										}
			|	ID					{	printf("  %p  ",recordString);
										//savedName = ;
										$$ = newExpNode(IdK);
										$$->attr.name = copyString(recordString);
										$$->type = declareType;
										if(insert(&symbol_table,recordString,declareType))
											printf("insert OK");
										else
											printf("insert failed");
									}
			|	init				{	$$ = $1 ;}
			;

	
init		:	ID					{	savedName = copyString(recordString);}
				ASSIGN expr			{	$$ = newExpNode(InitK);
										$$->attr.name = savedName;
										$$->type = declareType;
										$$->child[0] = $4;
										if(insert(&symbol_table,savedName,declareType))
											printf("insert OK");
										else
											printf("insert failed");
									}
			;
/*assign_stmt	:	ID					{	savedName = copyString(recordString);
										savedLineno = lineNum;
									}
				ASSIGN expr SEMI	{	$$ = newStmtNode(AssignK);
										$$->attr.name = savedName;//
										$$->child[0]=$4;
										$$->lineno = savedLineno;
									}
			;*/

if_stmt		:	IF LE expr RE stmt								{	$$ = newStmtNode(IfK);
																	$$->child[0]=$3;
																	$$->child[1]=$5;
																	$$->lineno = savedLineno;
																}
			|	IF LE expr RE stmt ELSE stmt					{	$$ = newStmtNode(IfElseK);
																	$$->child[0]=$3;
																	$$->child[1]=$5;
																	$$->child[2]=$7;
																	$$->lineno = savedLineno;
																}
			;

for_stmt	:	FOR LE expr SEMI expr SEMI expr RE stmt			{	$$ = newStmtNode(ForK);
																	$$->child[0] = $3;
																	$$->child[1] = $5;
																	$$->child[2] = $7;
																	$$->child[3] = $9;
																}
			;

while_stmt	:	WHILE LE expr RE stmt							{	$$ = newStmtNode(WhileK);
																	$$->child[0] = $3;
																	$$->child[1] = $5;
																	$$->lineno = savedLineno;
																}
			;
			

expr		:	expr EQ expr									{	$$ = newExpNode(OpK);
																	$$->attr.op = EQ;
																	$$->child[0]=$1;
																	$$->child[1]=$3;
																}
																
			|	expr NEQ expr									{	$$ = newExpNode(OpK);
																	$$->attr.op = NEQ;
																	$$->child[0]=$1;
																	$$->child[1]=$3;
																}
			|	expr LTE expr									{	$$ = newExpNode(OpK);
																	$$->attr.op = LTE;
																	$$->child[0]=$1;
																	$$->child[1]=$3;
																}
			|	expr GTE expr									{	$$ = newExpNode(OpK);
																	$$->attr.op = GTE;
																	$$->child[0]=$1;
																	$$->child[1]=$3;
																}
			|	expr bAND expr									{	$$ = newExpNode(OpK);
																	$$->attr.op = bAND;
																	$$->child[0]=$1;
																	$$->child[1]=$3;
																}
			|	expr bOR expr									{	$$ = newExpNode(OpK);
																	$$->attr.op = bOR;
																	$$->child[0]=$1;
																	$$->child[1]=$3;
																}
			|	bNOT expr										{	$$ = newExpNode(OpK);
																	$$->attr.op = bNOT;
																	$$->child[0]=$2;
																}
			|	NOT expr										{	$$ = newExpNode(OpK);
																	$$->attr.op = NOT;
																	$$->child[0]=$2;
																}
			|	expr MOD expr									{	$$ = newExpNode(OpK);
																	$$->attr.op = MOD;
																	$$->child[0]=$1;
																	$$->child[1]=$3;
																}
			|	SADD expr										{	$$ = newExpNode(OpK);
																	$$->attr.op = SADD_F;
																	$$->child[0]=$2;
																}
			|	expr SADD										{	$$ = newExpNode(OpK);
																	$$->attr.op = SADD_B;
																	$$->child[0]=$1;
																}
			|	SSUB expr										{	$$ = newExpNode(OpK);
																	$$->attr.op = SSUB_F;
																	$$->child[0]=$2;
																}
			|	expr SSUB										{	$$ = newExpNode(OpK);
																	$$->attr.op = SSUB_B;
																	$$->child[0]=$1;
																}
											
			|	expr LT expr									{	$$ = newExpNode(OpK);
																	$$->attr.op = LT;
																	$$->child[0]=$1;
																	$$->child[1]=$3;
																}
			|	expr GT expr									{	$$ = newExpNode(OpK);
																	$$->attr.op = GT;
																	$$->child[0]=$1;
																	$$->child[1]=$3;
																}
			|	expr ADD expr									{	$$ = newExpNode(OpK);
																	$$->attr.op = ADD;
																	$$->child[0]=$1;
																	$$->child[1]=$3;
																}
			|	expr SUB expr									{	$$ = newExpNode(OpK);
																	$$->attr.op = SUB;
																	$$->child[0]=$1;
																	$$->child[1]=$3;
																}
			|	expr MUL expr									{	$$ = newExpNode(OpK);
																	$$->attr.op = MUL;
																	$$->child[0]=$1;
																	$$->child[1]=$3;
																}
			|	expr DIV expr									{	$$ = newExpNode(OpK);
																	$$->attr.op = DIV;
																	$$->child[0]=$1;
																	$$->child[1]=$3;
																}
			|	SUB expr %prec UMINUS							{	$$ = newExpNode(OpK);
																	$$->attr.op = UMINUS;
																	$$->child[0] = $2;
																}
			|	LE expr RE										{	$$=$2;	}
			|	ID												{	$$ = newExpNode(IdK);	
																	$$->attr.name = copyString(recordString);
																	if(!lookup(symbol_table,recordString))
																		printf("Unknown Id!\n");
																}
			|	CHAR											{	$$ = newExpNode(ConstCK);
																	$$->attr.charVal = recordChar;
																	$$->type = Char;
																}
			|	INT												{	$$ = newExpNode(ConstK);
																	$$->attr.val = recordInt;
																	$$->type = Int;
																}
			|	expr AND expr									{	$$ = newExpNode(OpK);
																	$$->attr.op = AND;
																	$$->child[0]=$1;
																	$$->child[1]=$3;
																}
			|	expr OR expr									{	$$ = newExpNode(OpK);
																	$$->attr.op = OR;
																	$$->child[0]=$1;
																	$$->child[1]=$3;
																}
			|	expr LS expr									{	$$ = newExpNode(OpK);
																	$$->attr.op = LS;
																	$$->child[0]=$1;
																	$$->child[1]=$3;
																}
			|	expr RS expr									{	$$ = newExpNode(OpK);
																	$$->attr.op = RS;
																	$$->child[0]=$1;
																	$$->child[1]=$3;
																}
			|	expr bXOR expr									{	$$ = newExpNode(OpK);
																	$$->attr.op = bXOR;
																	$$->child[0]=$1;
																	$$->child[1]=$3;
																}
			|													{	$$ = NULL;}
			|	expr ASSIGN expr								{	$$ = newExpNode(OpK);
																	$$->attr.op = ASSIGN;
																	$$->child[0]=$1;
																	$$->child[1]=$3;
																}
			|	error											{	$$=NULL;	}										
			;




%%

/////////////////////////////////////////////////////////////////////////////
// programs section

int main(int argc,char** argv)
{
	char path[FileBuff] = "test.txt";
	if(argc==1)
		yyin = fopen("test.txt","r");
	else if(argc>2)
		{printf("Too Much Arguments!\n");}
	else
		yyin = fopen(argv[1],"r");
	//if(yyin!=NULL)
	//printf("Success");
	yyout = fopen("output.txt","w");
	yyparse();
	printf("\n\n");
	printf("root addr: %p\n",root);
	printTree(root);
	posTraverse(root, checkNode);
	preTraverse(root,0);
	printTree(root);
	printSymTab(symbol_table);
	printf("temp_var: %d\n",temp_var_seq);
	freopen("output.asm","w",stdout);
	gen_code(root);
	fclose(stdout);
	system("Pause");
	return 0;
}

