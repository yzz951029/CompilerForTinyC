%{
/****************************************************************************
_lexer.l
ParserWizard generated Lex file.

Date: 2016Äê11ÔÂ22ÈÕ
****************************************************************************/
#include"_lexer.h"
#include "_parser.h"
#include "stddef.h"
#include "TreeNode.h"
#include "SymTab.h"
//extern char *yylval;
int lineNum = 0;
char recordString[MAXBUFF]; 
int recordInt;
char recordChar;
ExpType declareType;
%}

// place any declarations here


FOR				for
WHILE			while
lines			\n
spaces			[\t ]
number			[0-9]
//numbers			([0-9])+
word			[a-zA-Z\_]
ID				({word})({number}|{word})*
INT				([0-9])+
SEMI			;
IF				if
TYPE			int|char
NOTE			\/\/[^\n]*
ELSE			else
MAIN			main
CHAR			'{word}'
OUTPUT			output
INPUT			input

%%

/////////////////////////////////////////////////////////////////////////////
// rules section

// place your Lex rules here

{MAIN}			{		return MAIN;}

{OUTPUT}		{		return OUTPUT;}

{INPUT}			{		return INPUT;}

{CHAR}			{		recordChar = yytext[1];
						return CHAR;}

"<="			{		return LTE;}

"^"				{		return bXOR;}

">="			{		return GTE;}

"%"				{		return MOD;}

"++"			{		return SADD;}

"--"			{		return SSUB;}


"&&"			{		printf(" <AND> ");return AND;	}

"&"				{		return bAND;}


"||"			{		printf(" <OR> ");return OR;	}

"|"				{		return bOR;}

"~"				{		return bNOT;}

"!="			{		return NEQ;}

"!"				{		return NOT;}


"<<"			{		printf(" <LS> ");return LS;}

">>"			{		printf(" <RS> ");return RS;}

"-"				{		printf(" <SUB> ");
						return SUB;}
{TYPE}			{		printf(" <TYPE> ");
						strcpy(recordString,yytext);
						declareType = char2type(yytext);
						return TYPE;}
{IF}			{		printf(" <IF> ");
						return IF;}
{ELSE}			{		printf(" <ELSE> ");return ELSE;}	
{FOR}			{		printf(" <FOR> ");//printf("%s\n",yytext);
						return FOR;}
{WHILE}			{		printf(" <WHILE> ");
						return WHILE;}
{lines}			{lineNum++;}
{spaces}		{}
{INT}			{	printf(" <INT> ");
					recordInt = atoi(yytext);return INT;}
{ID}			{	printf(" <ID> ");
					/*struct word * ad = lookup(&symbol_table,yytext);
					printf(" %s",yytext);
					printf(" %p> ",ad);*/
					strcpy(recordString,yytext);
					return ID;}
"+"				{		printf(" <ADD> ");
						return ADD;}

"*"				{		printf(" <MUL> ");
						return MUL;}
"/"				{		printf(" <DIV> ");
						return DIV;}
"("				{		printf(" <LE> ");
						return LE;}
")"				{		printf(" <RE> ");
						return RE;}
{SEMI}			{		printf(" <SEMI> ");
						return SEMI;}
"="				{		printf(" <=> ");
						return ASSIGN;}
"=="			{		printf(" <==> ");
						return EQ;}
"{"				{		printf(" <LB> ");
						return LB;}
"}"				{		printf(" <RB> ");
						return RB;}
","				{		printf("<COM>");
						return COM;}
						
"<"				{		return LT;	}
	
">"				{		return GT;	}


{NOTE}			{	printf("A note!\n");}
%%

/////////////////////////////////////////////////////////////////////////////
// programs section
/*struct word *lookup(struct word** symbol_table,char *name)
{
	if (*symbol_table == NULL)
	{
		*symbol_table= malloc(sizeof(struct word));
		strcpy((*symbol_table)->name, name);
		(*symbol_table)->next = NULL;
		return *symbol_table;
	}
	struct word *current = *symbol_table;
	//printf("%p", current);
	while (current->next)
	{
		if (strcmp(current->name, name) == 0)
			return current;
		current = current->next;
	}
	//printf("%s\n", (*current)->name);
	//printf("%s\n", name);
	if (strcmp(current->name, name) == 0)
		return current;
	struct word *next = malloc(sizeof(struct word));
	next->next = NULL;
	strcpy(next->name, name);
	current->next = next;
	return next;
}*/
