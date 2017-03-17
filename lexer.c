/****************************************************************************
*                     U N R E G I S T E R E D   C O P Y
* 
* You are on day 35 of your 30 day trial period.
* 
* This file was produced by an UNREGISTERED COPY of Parser Generator. It is
* for evaluation purposes only. If you continue to use Parser Generator 30
* days after installation then you are required to purchase a license. For
* more information see the online help or go to the Bumble-Bee Software
* homepage at:
* 
* http://www.bumblebeesoftware.com
* 
* This notice must remain present in the file. It cannot be removed.
****************************************************************************/

/****************************************************************************
* lexer.c
* C source file generated from lexer.l.
* 
* Date: 11/22/16
* Time: 10:18:50
* 
* ALex Version: 2.07
****************************************************************************/

#include <yylex.h>

/* namespaces */
#if defined(__cplusplus) && defined(YYSTDCPPLIB)
using namespace std;
#endif
#if defined(__cplusplus) && defined(YYNAMESPACE)
using namespace yl;
#endif

#define YYFASTLEXER

#line 1 ".\\lexer.l"

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



#line 66 "lexer.c"
/* repeated because of possible precompiled header */
#include <yylex.h>

/* namespaces */
#if defined(__cplusplus) && defined(YYSTDCPPLIB)
using namespace std;
#endif
#if defined(__cplusplus) && defined(YYNAMESPACE)
using namespace yl;
#endif

#define YYFASTLEXER

#include ".\lexer.h"

#ifndef YYTEXT_SIZE
#define YYTEXT_SIZE 100
#endif
#ifndef YYUNPUT_SIZE
#define YYUNPUT_SIZE YYTEXT_SIZE
#endif
#ifndef YYTEXT_MAX
#define YYTEXT_MAX 0
#endif
#ifndef YYUNPUT_MAX
#define YYUNPUT_MAX YYTEXT_MAX
#endif

/* yytext */
static char YYNEAR yysatext[(YYTEXT_SIZE) + 1];		/* extra char for \0 */
char YYFAR *YYNEAR YYDCDECL yystext = yysatext;
char YYFAR *YYNEAR YYDCDECL yytext = yysatext;
int YYNEAR YYDCDECL yystext_size = (YYTEXT_SIZE);
int YYNEAR YYDCDECL yytext_size = (YYTEXT_SIZE);
int YYNEAR YYDCDECL yytext_max = (YYTEXT_MAX);

/* yystatebuf */
#if (YYTEXT_SIZE) != 0
static int YYNEAR yysastatebuf[(YYTEXT_SIZE)];
int YYFAR *YYNEAR YYDCDECL yysstatebuf = yysastatebuf;
int YYFAR *YYNEAR YYDCDECL yystatebuf = yysastatebuf;
#else
int YYFAR *YYNEAR YYDCDECL yysstatebuf = NULL;
int YYFAR *YYNEAR YYDCDECL yystatebuf = NULL;
#endif

/* yyunputbuf */
#if (YYUNPUT_SIZE) != 0
static int YYNEAR yysaunputbuf[(YYUNPUT_SIZE)];
int YYFAR *YYNEAR YYDCDECL yysunputbufptr = yysaunputbuf;
int YYFAR *YYNEAR YYDCDECL yyunputbufptr = yysaunputbuf;
#else
int YYFAR *YYNEAR YYDCDECL yysunputbufptr = NULL;
int YYFAR *YYNEAR YYDCDECL yyunputbufptr = NULL;
#endif
int YYNEAR YYDCDECL yysunput_size = (YYUNPUT_SIZE);
int YYNEAR YYDCDECL yyunput_size = (YYUNPUT_SIZE);
int YYNEAR YYDCDECL yyunput_max = (YYUNPUT_MAX);

/* backwards compatability with lex */
#ifdef input
#ifdef YYPROTOTYPE
int YYCDECL yyinput(void)
#else
int YYCDECL yyinput()
#endif
{
	return input();
}
#else
#define input yyinput
#endif

#ifdef output
#ifdef YYPROTOTYPE
void YYCDECL yyoutput(int ch)
#else
void YYCDECL yyoutput(ch)
int ch;
#endif
{
	output(ch);
}
#else
#define output yyoutput
#endif

#ifdef unput
#ifdef YYPROTOTYPE
void YYCDECL yyunput(int ch)
#else
void YYCDECL yyunput(ch)
int ch;
#endif
{
	unput(ch);
}
#else
#define unput yyunput
#endif

#ifndef YYNBORLANDWARN
#ifdef __BORLANDC__
#pragma warn -rch		/* <warning: unreachable code> off */
#endif
#endif

#ifdef YYPROTOTYPE
int YYCDECL yylexeraction(int action)
#else
int YYCDECL yylexeraction(action)
int action;
#endif
{
	yyreturnflg = YYTRUE;
	switch (action) {
	case 1:
		{
#line 49 ".\\lexer.l"
printf(" <TYPE> ");return TYPE;
#line 187 "lexer.c"
		}
		break;
	case 2:
		{
#line 50 ".\\lexer.l"
printf(" <IF> ");return IF;
#line 194 "lexer.c"
		}
		break;
	case 3:
		{
#line 51 ".\\lexer.l"
printf(" <FOR> ");printf("%s\n",yytext);return FOR;
#line 201 "lexer.c"
		}
		break;
	case 4:
		{
#line 52 ".\\lexer.l"
printf(" <WHILE> ");return WHILE;
#line 208 "lexer.c"
		}
		break;
	case 5:
		{
#line 53 ".\\lexer.l"
lineNum++;
#line 215 "lexer.c"
		}
		break;
	case 6:
		{
#line 54 ".\\lexer.l"

#line 222 "lexer.c"
		}
		break;
	case 7:
		{
#line 55 ".\\lexer.l"
printf(" <INT> ");yylval = atoi(yytext);return INT;
#line 229 "lexer.c"
		}
		break;
	case 8:
		{
#line 56 ".\\lexer.l"
	/*printf(" <ID ");
					struct word * ad = lookup(&symbol_table,yytext);
					printf(" %s",yytext);
					printf(" %p> ",ad);*/
					return ID;
#line 240 "lexer.c"
		}
		break;
	case 9:
		{
#line 61 ".\\lexer.l"
printf(" <ADD> ");return ADD;
#line 247 "lexer.c"
		}
		break;
	case 10:
		{
#line 62 ".\\lexer.l"
printf(" <SUB> ");return SUB;
#line 254 "lexer.c"
		}
		break;
	case 11:
		{
#line 63 ".\\lexer.l"
printf(" <MUL> ");return MUL;
#line 261 "lexer.c"
		}
		break;
	case 12:
		{
#line 64 ".\\lexer.l"
printf(" <DIV> ");return DIV;
#line 268 "lexer.c"
		}
		break;
	case 13:
		{
#line 65 ".\\lexer.l"
printf(" <LE> ");return LE;
#line 275 "lexer.c"
		}
		break;
	case 14:
		{
#line 66 ".\\lexer.l"
printf(" <RE> ");return RE;
#line 282 "lexer.c"
		}
		break;
	case 15:
		{
#line 67 ".\\lexer.l"
printf(" <SEMI> ");return SEMI;
#line 289 "lexer.c"
		}
		break;
	case 16:
		{
#line 68 ".\\lexer.l"
printf(" <=> ");return ASSIGN;
#line 296 "lexer.c"
		}
		break;
	case 17:
		{
#line 69 ".\\lexer.l"
printf(" <==> ");return EQ;
#line 303 "lexer.c"
		}
		break;
	case 18:
		{
#line 70 ".\\lexer.l"
printf(" <LB> ");return LB;
#line 310 "lexer.c"
		}
		break;
	case 19:
		{
#line 71 ".\\lexer.l"
printf(" <RB> ");return RB;
#line 317 "lexer.c"
		}
		break;
	case 20:
		{
#line 72 ".\\lexer.l"
return COM;
#line 324 "lexer.c"
		}
		break;
	default:
		yyassert(0);
		break;
	}
	yyreturnflg = YYFALSE;
	return 0;
}

#ifndef YYNBORLANDWARN
#ifdef __BORLANDC__
#pragma warn .rch		/* <warning: unreachable code> to the old state */
#endif
#endif
YYCONST yymatch_t YYNEARFAR YYBASED_CODE YYDCDECL yymatch[] = {
	0
};

int YYNEAR YYDCDECL yytransitionmax = 176;
YYCONST yytransition_t YYNEARFAR YYBASED_CODE YYDCDECL yytransition[] = {
	{ 0, 0 },
	{ 3, 1 },
	{ 4, 1 },
	{ 12, 12 },
	{ 12, 12 },
	{ 12, 12 },
	{ 12, 12 },
	{ 12, 12 },
	{ 12, 12 },
	{ 12, 12 },
	{ 12, 12 },
	{ 12, 12 },
	{ 12, 12 },
	{ 27, 19 },
	{ 24, 16 },
	{ 25, 17 },
	{ 26, 18 },
	{ 0, 10 },
	{ 29, 20 },
	{ 30, 24 },
	{ 31, 25 },
	{ 28, 19 },
	{ 32, 26 },
	{ 33, 28 },
	{ 3, 1 },
	{ 34, 29 },
	{ 33, 30 },
	{ 35, 31 },
	{ 36, 34 },
	{ 37, 35 },
	{ 38, 36 },
	{ 33, 37 },
	{ 5, 1 },
	{ 6, 1 },
	{ 7, 1 },
	{ 8, 1 },
	{ 9, 1 },
	{ 10, 1 },
	{ 23, 14 },
	{ 11, 1 },
	{ 0, 1 },
	{ 12, 1 },
	{ 12, 1 },
	{ 12, 1 },
	{ 12, 1 },
	{ 12, 1 },
	{ 12, 1 },
	{ 12, 1 },
	{ 12, 1 },
	{ 12, 1 },
	{ 0, 0 },
	{ 13, 1 },
	{ 0, 0 },
	{ 14, 1 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 16, 1 },
	{ 17, 1 },
	{ 0, 0 },
	{ 18, 1 },
	{ 0, 0 },
	{ 0, 0 },
	{ 19, 1 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 15, 38 },
	{ 15, 38 },
	{ 15, 38 },
	{ 15, 38 },
	{ 15, 38 },
	{ 15, 38 },
	{ 15, 38 },
	{ 15, 38 },
	{ 15, 38 },
	{ 15, 38 },
	{ 20, 1 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 21, 1 },
	{ 0, 0 },
	{ 22, 1 },
	{ 15, 38 },
	{ 15, 38 },
	{ 15, 38 },
	{ 15, 38 },
	{ 15, 38 },
	{ 15, 38 },
	{ 15, 38 },
	{ 15, 38 },
	{ 15, 38 },
	{ 15, 38 },
	{ 15, 38 },
	{ 15, 38 },
	{ 15, 38 },
	{ 15, 38 },
	{ 15, 38 },
	{ 15, 38 },
	{ 15, 38 },
	{ 15, 38 },
	{ 15, 38 },
	{ 15, 38 },
	{ 15, 38 },
	{ 15, 38 },
	{ 15, 38 },
	{ 15, 38 },
	{ 15, 38 },
	{ 15, 38 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 15, 38 },
	{ 0, 0 },
	{ 15, 38 },
	{ 15, 38 },
	{ 15, 38 },
	{ 15, 38 },
	{ 15, 38 },
	{ 15, 38 },
	{ 15, 38 },
	{ 15, 38 },
	{ 15, 38 },
	{ 15, 38 },
	{ 15, 38 },
	{ 15, 38 },
	{ 15, 38 },
	{ 15, 38 },
	{ 15, 38 },
	{ 15, 38 },
	{ 15, 38 },
	{ 15, 38 },
	{ 15, 38 },
	{ 15, 38 },
	{ 15, 38 },
	{ 15, 38 },
	{ 15, 38 },
	{ 15, 38 },
	{ 15, 38 },
	{ 15, 38 }
};

YYCONST yystate_t YYNEARFAR YYBASED_CODE YYDCDECL yystate[] = {
	{ 0, 0, 0 },
	{ 38, -8, 0 },
	{ 1, 0, 0 },
	{ 0, 0, 6 },
	{ 0, 0, 5 },
	{ 0, 0, 13 },
	{ 0, 0, 14 },
	{ 0, 0, 11 },
	{ 0, 0, 9 },
	{ 0, 0, 20 },
	{ 12, -31, 10 },
	{ 0, 0, 12 },
	{ 0, -45, 7 },
	{ 0, 0, 15 },
	{ 0, -23, 16 },
	{ 38, 0, 8 },
	{ 38, -90, 8 },
	{ 38, -96, 8 },
	{ 38, -95, 8 },
	{ 38, -89, 8 },
	{ 38, -86, 8 },
	{ 0, 0, 18 },
	{ 0, 0, 19 },
	{ 0, 0, 17 },
	{ 38, -78, 8 },
	{ 38, -97, 8 },
	{ 38, -92, 8 },
	{ 38, 0, 2 },
	{ 38, -93, 8 },
	{ 38, -80, 8 },
	{ 38, -88, 8 },
	{ 38, -71, 8 },
	{ 38, 0, 3 },
	{ 38, 0, 1 },
	{ 38, -80, 8 },
	{ 38, -79, 8 },
	{ 38, -71, 8 },
	{ 38, -70, 8 },
	{ 0, 53, 4 }
};

YYCONST yybackup_t YYNEARFAR YYBASED_CODE YYDCDECL yybackup[] = {
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0
};

#line 74 ".\\lexer.l"


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

