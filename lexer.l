%{
/****************************************************************************
token.l
ParserWizard generated Lex file.

Date: 2016Äê11ÔÂ8ÈÕ
****************************************************************************/

#include "parser.h"
#include "stddef.h"
#include "TreeNode.h"
extern char *yylval;
int lineNum = 0;
struct word
{
	struct word *next;
	char name[100];
};

struct word *symbol_table = NULL;

struct word *lookup(struct word*symbol_table,char *name);


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
INT				-?([1-9])([0-9])*
SEMI			;
IF				if
TYPE			int|double|char

%%

/////////////////////////////////////////////////////////////////////////////
// rules section

// place your Lex rules here
{TYPE}			{printf(" <TYPE> ");return TYPE;}
{IF}			{printf(" <IF> ");return IF;}
{FOR}			{printf(" <FOR> ");printf("%s\n",yytext);return FOR;}
{WHILE}			{printf(" <WHILE> ");return WHILE;}
{lines}			{lineNum++;}
{spaces}		{}
{INT}			{printf(" <INT> ");yylval = atoi(yytext);return INT;}
{ID}			{	/*printf(" <ID ");
					struct word * ad = lookup(&symbol_table,yytext);
					printf(" %s",yytext);
					printf(" %p> ",ad);*/
					return ID;}
"+"				{printf(" <ADD> ");return ADD;}
"-"				{printf(" <SUB> ");return SUB;}
"*"				{printf(" <MUL> ");return MUL;}
"/"				{printf(" <DIV> ");return DIV;}
"("				{printf(" <LE> ");return LE;}
")"				{printf(" <RE> ");return RE;}
{SEMI}			{printf(" <SEMI> ");return SEMI;}
"="				{printf(" <=> ");return ASSIGN;}
"=="			{printf(" <==> ");return EQ;}
"{"				{printf(" <LB> ");return LB;}
"}"				{printf(" <RB> ");return RB;}
","				{return COM;}

%%

/////////////////////////////////////////////////////////////////////////////
// programs section
struct word *lookup(struct word** symbol_table,char *name)
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
}
