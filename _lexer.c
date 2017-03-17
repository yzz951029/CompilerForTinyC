/****************************************************************************
*                     U N R E G I S T E R E D   C O P Y
* 
* You are on day 70 of your 30 day trial period.
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
* _lexer.c
* C source file generated from _lexer.l.
* 
* Date: 12/27/16
* Time: 23:21:25
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

#line 1 ".\\_lexer.l"

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

#line 60 "_lexer.c"
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

#include ".\_lexer.h"

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
#line 50 ".\\_lexer.l"
		return MAIN;
#line 181 "_lexer.c"
		}
		break;
	case 2:
		{
#line 52 ".\\_lexer.l"
		return OUTPUT;
#line 188 "_lexer.c"
		}
		break;
	case 3:
		{
#line 54 ".\\_lexer.l"
		return INPUT;
#line 195 "_lexer.c"
		}
		break;
	case 4:
		{
#line 56 ".\\_lexer.l"
		recordChar = yytext[1];
						return CHAR;
#line 203 "_lexer.c"
		}
		break;
	case 5:
		{
#line 59 ".\\_lexer.l"
		return LTE;
#line 210 "_lexer.c"
		}
		break;
	case 6:
		{
#line 61 ".\\_lexer.l"
		return bXOR;
#line 217 "_lexer.c"
		}
		break;
	case 7:
		{
#line 63 ".\\_lexer.l"
		return GTE;
#line 224 "_lexer.c"
		}
		break;
	case 8:
		{
#line 65 ".\\_lexer.l"
		return MOD;
#line 231 "_lexer.c"
		}
		break;
	case 9:
		{
#line 67 ".\\_lexer.l"
		return SADD;
#line 238 "_lexer.c"
		}
		break;
	case 10:
		{
#line 69 ".\\_lexer.l"
		return SSUB;
#line 245 "_lexer.c"
		}
		break;
	case 11:
		{
#line 72 ".\\_lexer.l"
		printf(" <AND> ");return AND;	
#line 252 "_lexer.c"
		}
		break;
	case 12:
		{
#line 74 ".\\_lexer.l"
		return bAND;
#line 259 "_lexer.c"
		}
		break;
	case 13:
		{
#line 77 ".\\_lexer.l"
		printf(" <OR> ");return OR;	
#line 266 "_lexer.c"
		}
		break;
	case 14:
		{
#line 79 ".\\_lexer.l"
		return bOR;
#line 273 "_lexer.c"
		}
		break;
	case 15:
		{
#line 81 ".\\_lexer.l"
		return bNOT;
#line 280 "_lexer.c"
		}
		break;
	case 16:
		{
#line 83 ".\\_lexer.l"
		return NEQ;
#line 287 "_lexer.c"
		}
		break;
	case 17:
		{
#line 85 ".\\_lexer.l"
		return NOT;
#line 294 "_lexer.c"
		}
		break;
	case 18:
		{
#line 88 ".\\_lexer.l"
		printf(" <LS> ");return LS;
#line 301 "_lexer.c"
		}
		break;
	case 19:
		{
#line 90 ".\\_lexer.l"
		printf(" <RS> ");return RS;
#line 308 "_lexer.c"
		}
		break;
	case 20:
		{
#line 92 ".\\_lexer.l"
		printf(" <SUB> ");
						return SUB;
#line 316 "_lexer.c"
		}
		break;
	case 21:
		{
#line 94 ".\\_lexer.l"
		printf(" <TYPE> ");
						strcpy(recordString,yytext);
						declareType = char2type(yytext);
						return TYPE;
#line 326 "_lexer.c"
		}
		break;
	case 22:
		{
#line 98 ".\\_lexer.l"
		printf(" <IF> ");
						return IF;
#line 334 "_lexer.c"
		}
		break;
	case 23:
		{
#line 100 ".\\_lexer.l"
		printf(" <ELSE> ");return ELSE;
#line 341 "_lexer.c"
		}
		break;
	case 24:
		{
#line 101 ".\\_lexer.l"
		printf(" <FOR> ");//printf("%s\n",yytext);
						return FOR;
#line 349 "_lexer.c"
		}
		break;
	case 25:
		{
#line 103 ".\\_lexer.l"
		printf(" <WHILE> ");
						return WHILE;
#line 357 "_lexer.c"
		}
		break;
	case 26:
		{
#line 105 ".\\_lexer.l"
lineNum++;
#line 364 "_lexer.c"
		}
		break;
	case 27:
		{
#line 106 ".\\_lexer.l"

#line 371 "_lexer.c"
		}
		break;
	case 28:
		{
#line 107 ".\\_lexer.l"
	printf(" <INT> ");
					recordInt = atoi(yytext);return INT;
#line 379 "_lexer.c"
		}
		break;
	case 29:
		{
#line 109 ".\\_lexer.l"
	printf(" <ID> ");
					/*struct word * ad = lookup(&symbol_table,yytext);
					printf(" %s",yytext);
					printf(" %p> ",ad);*/
					strcpy(recordString,yytext);
					return ID;
#line 391 "_lexer.c"
		}
		break;
	case 30:
		{
#line 115 ".\\_lexer.l"
		printf(" <ADD> ");
						return ADD;
#line 399 "_lexer.c"
		}
		break;
	case 31:
		{
#line 118 ".\\_lexer.l"
		printf(" <MUL> ");
						return MUL;
#line 407 "_lexer.c"
		}
		break;
	case 32:
		{
#line 120 ".\\_lexer.l"
		printf(" <DIV> ");
						return DIV;
#line 415 "_lexer.c"
		}
		break;
	case 33:
		{
#line 122 ".\\_lexer.l"
		printf(" <LE> ");
						return LE;
#line 423 "_lexer.c"
		}
		break;
	case 34:
		{
#line 124 ".\\_lexer.l"
		printf(" <RE> ");
						return RE;
#line 431 "_lexer.c"
		}
		break;
	case 35:
		{
#line 126 ".\\_lexer.l"
		printf(" <SEMI> ");
						return SEMI;
#line 439 "_lexer.c"
		}
		break;
	case 36:
		{
#line 128 ".\\_lexer.l"
		printf(" <=> ");
						return ASSIGN;
#line 447 "_lexer.c"
		}
		break;
	case 37:
		{
#line 130 ".\\_lexer.l"
		printf(" <==> ");
						return EQ;
#line 455 "_lexer.c"
		}
		break;
	case 38:
		{
#line 132 ".\\_lexer.l"
		printf(" <LB> ");
						return LB;
#line 463 "_lexer.c"
		}
		break;
	case 39:
		{
#line 134 ".\\_lexer.l"
		printf(" <RB> ");
						return RB;
#line 471 "_lexer.c"
		}
		break;
	case 40:
		{
#line 136 ".\\_lexer.l"
		printf("<COM>");
						return COM;
#line 479 "_lexer.c"
		}
		break;
#line 138 ".\\_lexer.l"
						
#line 484 "_lexer.c"
	case 41:
		{
#line 139 ".\\_lexer.l"
		return LT;	
#line 489 "_lexer.c"
		}
		break;
#line 140 ".\\_lexer.l"
	
#line 494 "_lexer.c"
	case 42:
		{
#line 141 ".\\_lexer.l"
		return GT;	
#line 499 "_lexer.c"
		}
		break;
	case 43:
		{
#line 144 ".\\_lexer.l"
	printf("A note!\n");
#line 506 "_lexer.c"
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

int YYNEAR YYDCDECL yytransitionmax = 252;
YYCONST yytransition_t YYNEARFAR YYBASED_CODE YYDCDECL yytransition[] = {
	{ 0, 0 },
	{ 3, 1 },
	{ 4, 1 },
	{ 16, 16 },
	{ 16, 16 },
	{ 16, 16 },
	{ 16, 16 },
	{ 16, 16 },
	{ 16, 16 },
	{ 16, 16 },
	{ 16, 16 },
	{ 16, 16 },
	{ 16, 16 },
	{ 48, 26 },
	{ 58, 49 },
	{ 43, 20 },
	{ 44, 20 },
	{ 34, 5 },
	{ 59, 49 },
	{ 40, 18 },
	{ 41, 18 },
	{ 49, 26 },
	{ 42, 19 },
	{ 37, 12 },
	{ 3, 1 },
	{ 5, 1 },
	{ 45, 23 },
	{ 46, 24 },
	{ 47, 25 },
	{ 6, 1 },
	{ 7, 1 },
	{ 8, 1 },
	{ 9, 1 },
	{ 10, 1 },
	{ 11, 1 },
	{ 12, 1 },
	{ 13, 1 },
	{ 14, 1 },
	{ 38, 14 },
	{ 15, 1 },
	{ 16, 1 },
	{ 16, 1 },
	{ 16, 1 },
	{ 16, 1 },
	{ 16, 1 },
	{ 16, 1 },
	{ 16, 1 },
	{ 16, 1 },
	{ 16, 1 },
	{ 16, 1 },
	{ 50, 27 },
	{ 17, 1 },
	{ 18, 1 },
	{ 19, 1 },
	{ 20, 1 },
	{ 51, 28 },
	{ 52, 29 },
	{ 53, 31 },
	{ 54, 36 },
	{ 0, 39 },
	{ 55, 45 },
	{ 56, 46 },
	{ 57, 47 },
	{ 39, 15 },
	{ 60, 50 },
	{ 61, 51 },
	{ 62, 52 },
	{ 59, 55 },
	{ 63, 56 },
	{ 64, 58 },
	{ 65, 60 },
	{ 66, 61 },
	{ 67, 62 },
	{ 68, 64 },
	{ 69, 66 },
	{ 70, 67 },
	{ 71, 69 },
	{ 35, 7 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 22, 1 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 23, 1 },
	{ 0, 0 },
	{ 24, 1 },
	{ 25, 1 },
	{ 0, 0 },
	{ 0, 0 },
	{ 26, 1 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 27, 1 },
	{ 0, 0 },
	{ 28, 1 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 29, 1 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 30, 1 },
	{ 31, 1 },
	{ 32, 1 },
	{ 33, 1 },
	{ 21, 71 },
	{ 21, 71 },
	{ 21, 71 },
	{ 21, 71 },
	{ 21, 71 },
	{ 21, 71 },
	{ 21, 71 },
	{ 21, 71 },
	{ 21, 71 },
	{ 21, 71 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 21, 71 },
	{ 21, 71 },
	{ 21, 71 },
	{ 21, 71 },
	{ 21, 71 },
	{ 21, 71 },
	{ 21, 71 },
	{ 21, 71 },
	{ 21, 71 },
	{ 21, 71 },
	{ 21, 71 },
	{ 21, 71 },
	{ 21, 71 },
	{ 21, 71 },
	{ 21, 71 },
	{ 21, 71 },
	{ 21, 71 },
	{ 21, 71 },
	{ 21, 71 },
	{ 21, 71 },
	{ 21, 71 },
	{ 21, 71 },
	{ 21, 71 },
	{ 21, 71 },
	{ 21, 71 },
	{ 21, 71 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 21, 71 },
	{ 0, 0 },
	{ 21, 71 },
	{ 21, 71 },
	{ 21, 71 },
	{ 21, 71 },
	{ 21, 71 },
	{ 21, 71 },
	{ 21, 71 },
	{ 21, 71 },
	{ 21, 71 },
	{ 21, 71 },
	{ 21, 71 },
	{ 21, 71 },
	{ 21, 71 },
	{ 21, 71 },
	{ 21, 71 },
	{ 21, 71 },
	{ 21, 71 },
	{ 21, 71 },
	{ 21, 71 },
	{ 21, 71 },
	{ 21, 71 },
	{ 21, 71 },
	{ 21, 71 },
	{ 21, 71 },
	{ 21, 71 },
	{ 21, 71 },
	{ 36, 8 },
	{ 36, 8 },
	{ 36, 8 },
	{ 36, 8 },
	{ 36, 8 },
	{ 36, 8 },
	{ 36, 8 },
	{ 36, 8 },
	{ 36, 8 },
	{ 36, 8 },
	{ 36, 8 },
	{ 36, 8 },
	{ 36, 8 },
	{ 36, 8 },
	{ 36, 8 },
	{ 36, 8 },
	{ 36, 8 },
	{ 36, 8 },
	{ 36, 8 },
	{ 36, 8 },
	{ 36, 8 },
	{ 36, 8 },
	{ 36, 8 },
	{ 36, 8 },
	{ 36, 8 },
	{ 36, 8 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 36, 8 },
	{ 0, 0 },
	{ 36, 8 },
	{ 36, 8 },
	{ 36, 8 },
	{ 36, 8 },
	{ 36, 8 },
	{ 36, 8 },
	{ 36, 8 },
	{ 36, 8 },
	{ 36, 8 },
	{ 36, 8 },
	{ 36, 8 },
	{ 36, 8 },
	{ 36, 8 },
	{ 36, 8 },
	{ 36, 8 },
	{ 36, 8 },
	{ 36, 8 },
	{ 36, 8 },
	{ 36, 8 },
	{ 36, 8 },
	{ 36, 8 },
	{ 36, 8 },
	{ 36, 8 },
	{ 36, 8 },
	{ 36, 8 },
	{ 36, 8 }
};

YYCONST yystate_t YYNEARFAR YYBASED_CODE YYDCDECL yystate[] = {
	{ 0, 0, 0 },
	{ 71, -8, 0 },
	{ 1, 0, 0 },
	{ 0, 0, 27 },
	{ 0, 0, 26 },
	{ 0, -44, 17 },
	{ 0, 0, 8 },
	{ 0, 39, 12 },
	{ 0, 129, 0 },
	{ 0, 0, 33 },
	{ 0, 0, 34 },
	{ 0, 0, 31 },
	{ 0, -20, 30 },
	{ 0, 0, 40 },
	{ 0, -7, 20 },
	{ 0, 16, 32 },
	{ 0, -45, 28 },
	{ 0, 0, 35 },
	{ 0, -41, 41 },
	{ 0, -39, 36 },
	{ 0, -46, 42 },
	{ 71, 0, 29 },
	{ 0, 0, 6 },
	{ 71, -78, 29 },
	{ 71, -81, 29 },
	{ 71, -83, 29 },
	{ 71, -89, 29 },
	{ 71, -47, 29 },
	{ 71, -62, 29 },
	{ 71, -48, 29 },
	{ 0, 0, 38 },
	{ 0, -67, 14 },
	{ 0, 0, 39 },
	{ 0, 0, 15 },
	{ 0, 0, 16 },
	{ 0, 0, 11 },
	{ 0, 19, 0 },
	{ 0, 0, 9 },
	{ 0, 0, 10 },
	{ -39, 49, 43 },
	{ 0, 0, 18 },
	{ 0, 0, 5 },
	{ 0, 0, 37 },
	{ 0, 0, 7 },
	{ 0, 0, 19 },
	{ 71, -37, 29 },
	{ 71, -54, 29 },
	{ 71, -52, 29 },
	{ 71, 0, 22 },
	{ 71, -98, 29 },
	{ 71, -41, 29 },
	{ 71, -51, 29 },
	{ 71, -39, 29 },
	{ 0, 0, 13 },
	{ 0, 0, 4 },
	{ 71, -47, 29 },
	{ 71, -33, 29 },
	{ 71, 0, 24 },
	{ 71, -48, 29 },
	{ 71, 0, 21 },
	{ 71, -40, 29 },
	{ 71, -41, 29 },
	{ 71, -36, 29 },
	{ 71, 0, 23 },
	{ 71, -43, 29 },
	{ 71, 0, 1 },
	{ 71, -43, 29 },
	{ 71, -26, 29 },
	{ 71, 0, 3 },
	{ 71, -40, 29 },
	{ 71, 0, 25 },
	{ 0, 71, 2 }
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
	0,
	0,
	0,
	0
};

#line 145 ".\\_lexer.l"


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

