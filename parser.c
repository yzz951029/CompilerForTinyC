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
* parser.c
* C source file generated from parser.y.
* 
* Date: 11/22/16
* Time: 10:18:50
* 
* AYACC Version: 2.07
****************************************************************************/

#include <yypars.h>

/* namespaces */
#if defined(__cplusplus) && defined(YYSTDCPPLIB)
using namespace std;
#endif
#if defined(__cplusplus) && defined(YYNAMESPACE)
using namespace yl;
#endif

#define YYFASTPARSER

#line 1 ".\\parser.y"

/****************************************************************************
token.y
ParserWizard generated YACC file.

Date: 2016Äê11ÔÂ8ÈÕ
****************************************************************************/

#include "lexer.h"
#include"TreeNode.h"

static TreeNode * root

#line 54 "parser.c"
/* repeated because of possible precompiled header */
#include <yypars.h>

/* namespaces */
#if defined(__cplusplus) && defined(YYSTDCPPLIB)
using namespace std;
#endif
#if defined(__cplusplus) && defined(YYNAMESPACE)
using namespace yl;
#endif

#define YYFASTPARSER

#include ".\parser.h"

#ifndef YYSTYPE
#define YYSTYPE TreeNode *
#endif
#ifndef YYSTACK_SIZE
#define YYSTACK_SIZE 100
#endif
#ifndef YYSTACK_MAX
#define YYSTACK_MAX 0
#endif

/* (state) stack */
#if (YYSTACK_SIZE) != 0
static yystack_t YYNEAR yystack[(YYSTACK_SIZE)];
yystack_t YYFAR *YYNEAR YYDCDECL yysstackptr = yystack;
yystack_t YYFAR *YYNEAR YYDCDECL yystackptr = yystack;
#else
yystack_t YYFAR *YYNEAR YYDCDECL yysstackptr = NULL;
yystack_t YYFAR *YYNEAR YYDCDECL yystackptr = NULL;
#endif

/* attribute stack */
#if (YYSTACK_SIZE) != 0
static YYSTYPE YYNEAR yyattributestack[(YYSTACK_SIZE)];
#ifdef YYPROTOTYPE
void YYFAR *YYNEAR YYDCDECL yysattributestackptr = yyattributestack;
void YYFAR *YYNEAR YYDCDECL yyattributestackptr = yyattributestack;
#else
char YYFAR *YYNEAR YYDCDECL yysattributestackptr = (char YYFAR *) yyattributestack;
char YYFAR *YYNEAR YYDCDECL yyattributestackptr = (char YYFAR *) yyattributestack;
#endif
#else
#ifdef YYPROTOTYPE
void YYFAR *YYNEAR YYDCDECL yysattributestackptr = NULL;
void YYFAR *YYNEAR YYDCDECL yyattributestackptr = NULL;
#else
char YYFAR *YYNEAR YYDCDECL yysattributestackptr = NULL;
char YYFAR *YYNEAR YYDCDECL yyattributestackptr = NULL;
#endif
#endif

int YYNEAR YYDCDECL yysstack_size = (YYSTACK_SIZE);
int YYNEAR YYDCDECL yystack_size = (YYSTACK_SIZE);
int YYNEAR YYDCDECL yystack_max = (YYSTACK_MAX);

/* attributes */
YYSTYPE YYNEAR yyval;
YYSTYPE YYNEAR yylval;
#ifdef YYPROTOTYPE
void YYFAR *YYNEAR YYDCDECL yyvalptr = &yyval;
void YYFAR *YYNEAR YYDCDECL yylvalptr = &yylval;
#else
char YYFAR *YYNEAR YYDCDECL yyvalptr = (char *) &yyval;
char YYFAR *YYNEAR YYDCDECL yylvalptr = (char *) &yylval;
#endif

size_t YYNEAR YYDCDECL yyattribute_size = sizeof(YYSTYPE);

/* yyattribute */
#ifdef YYDEBUG
#ifdef YYPROTOTYPE
static YYSTYPE YYFAR *yyattribute1(int index)
#else
static YYSTYPE YYFAR *yyattribute1(index)
int index;
#endif
{
	YYSTYPE YYFAR *p = &((YYSTYPE YYFAR *) yyattributestackptr)[yytop + index];
	return p;
}
#define yyattribute(index) (*yyattribute1(index))
#else
#define yyattribute(index) (((YYSTYPE YYFAR *) yyattributestackptr)[yytop + (index)])
#endif

#ifdef YYDEBUG
#ifdef YYPROTOTYPE
static void yyinitdebug(YYSTYPE YYFAR **p, int count)
#else
static void yyinitdebug(p, count)
YYSTYPE YYFAR **p;
int count;
#endif
{
	int i;
	yyassert(p != NULL);
	yyassert(count >= 1);

	for (i = 0; i < count; i++) {
		p[i] = &((YYSTYPE YYFAR *) yyattributestackptr)[yytop + i - (count - 1)];
	}
}
#endif

#ifdef YYPROTOTYPE
void YYCDECL yyparseraction(int action)
#else
void YYCDECL yyparseraction(action)
int action;
#endif
{
	switch (action) {
	case 0:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 46 ".\\parser.y"
root = yyattribute(1 - 1);
#line 180 "parser.c"
			}
		}
		break;
	case 1:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[3];
			yyinitdebug(yya, 3);
#endif
			{
#line 49 ".\\parser.y"
YYSTYPE t = yyattribute(1 - 2);
										if (t!=NULL)
										{
											while(t->sibling)
												t = t->sibling;
											t->sibling = yyattribute(3 - 2);
											yyval=yyattribute(1 - 2);
										}
										else
											yyval=yyattribute(3 - 2);
									
#line 203 "parser.c"
			}
		}
		break;
	case 2:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 60 ".\\parser.y"
yyval=yyattribute(1 - 1);
#line 216 "parser.c"
			}
		}
		break;
	case 3:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 63 ".\\parser.y"
 yyval = yyattribute(1 - 1); 
#line 229 "parser.c"
			}
		}
		break;
	case 4:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 64 ".\\parser.y"
 yyval = yyattribute(1 - 1); 
#line 242 "parser.c"
			}
		}
		break;
	case 5:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 65 ".\\parser.y"
 yyval = yyattribute(1 - 1); 
#line 255 "parser.c"
			}
		}
		break;
	case 6:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 66 ".\\parser.y"
 yyval = yyattribute(1 - 1); 
#line 268 "parser.c"
			}
		}
		break;
	case 7:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[4];
			yyinitdebug(yya, 4);
#endif
			{
#line 67 ".\\parser.y"
 yyval = yyattribute(2 - 3); 
#line 281 "parser.c"
			}
		}
		break;
	case 8:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 68 ".\\parser.y"
 yyval = yyattribute(1 - 1); 
#line 294 "parser.c"
			}
		}
		break;
	case 9:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 69 ".\\parser.y"
 yyval = newStmtNode(EmptyK); 
#line 307 "parser.c"
			}
		}
		break;
	case 10:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[3];
			yyinitdebug(yya, 3);
#endif
			{
#line 70 ".\\parser.y"
 yyval = yyattribute(1 - 2); 
#line 320 "parser.c"
			}
		}
		break;
	case 11:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 71 ".\\parser.y"
 yyval = NULL; 
#line 333 "parser.c"
			}
		}
		break;
	default:
		yyassert(0);
		break;
	}
}
#ifdef YYDEBUG
YYCONST yysymbol_t YYNEARFAR YYBASED_CODE YYDCDECL yysymbol[] = {
	{ "$end", 0 },
	{ "error", 256 },
	{ "ID", 257 },
	{ "INT", 258 },
	{ "FOR", 259 },
	{ "WHILE", 260 },
	{ "IF", 261 },
	{ "LB", 262 },
	{ "RB", 263 },
	{ "SEMI", 264 },
	{ "TYPE", 265 },
	{ "COM", 266 },
	{ "ELSE", 267 },
	{ "ASSIGN", 268 },
	{ "EQ", 269 },
	{ "ADD", 270 },
	{ "SUB", 271 },
	{ "MUL", 272 },
	{ "DIV", 273 },
	{ "LE", 274 },
	{ "RE", 275 },
	{ "UMINUS", 276 },
	{ NULL, 0 }
};

YYCONST char *YYCONST YYNEARFAR YYBASED_CODE YYDCDECL yyrule[] = {
	"$accept: program",
	"program: stmt_seq",
	"stmt_seq: stmt_seq stmt",
	"stmt_seq: stmt",
	"stmt: for_stmt",
	"stmt: while_stmt",
	"stmt: if_stmt",
	"stmt: assign_stmt",
	"stmt: LB stmt_seq RB",
	"stmt: decl_stmt",
	"stmt: SEMI",
	"stmt: expr SEMI",
	"stmt: error",
	"decl_stmt: TYPE idlist SEMI",
	"idlist: idlist COM ID",
	"idlist: ID",
	"assign_stmt: ID ASSIGN expr SEMI",
	"if_stmt: IF LE expr RE stmt_seq",
	"if_stmt: IF LE expr RE stmt_seq ELSE stmt_seq",
	"for_stmt: FOR LE expr SEMI expr SEMI expr RE stmt_seq",
	"while_stmt: WHILE LE expr RE stmt_seq",
	"expr: expr EQ expr",
	"expr: expr ADD expr",
	"expr: expr SUB expr",
	"expr: expr MUL expr",
	"expr: expr DIV expr",
	"expr: SUB expr",
	"expr: LE expr RE",
	"expr: ID",
	"expr: INT"
};
#endif

YYCONST yyreduction_t YYNEARFAR YYBASED_CODE YYDCDECL yyreduction[] = {
	{ 0, 1, -1 },
	{ 1, 1, 0 },
	{ 2, 2, 1 },
	{ 2, 1, 2 },
	{ 3, 1, 3 },
	{ 3, 1, 4 },
	{ 3, 1, 5 },
	{ 3, 1, 6 },
	{ 3, 3, 7 },
	{ 3, 1, 8 },
	{ 3, 1, 9 },
	{ 3, 2, 10 },
	{ 3, 1, 11 },
	{ 4, 3, -1 },
	{ 5, 3, -1 },
	{ 5, 1, -1 },
	{ 6, 4, -1 },
	{ 7, 5, -1 },
	{ 7, 7, -1 },
	{ 8, 9, -1 },
	{ 9, 5, -1 },
	{ 10, 3, -1 },
	{ 10, 3, -1 },
	{ 10, 3, -1 },
	{ 10, 3, -1 },
	{ 10, 3, -1 },
	{ 10, 2, -1 },
	{ 10, 3, -1 },
	{ 10, 1, -1 },
	{ 10, 1, -1 }
};

int YYNEAR YYDCDECL yytokenaction_size = 94;
YYCONST yytokenaction_t YYNEARFAR YYBASED_CODE YYDCDECL yytokenaction[] = {
	{ 62, YYAT_SHIFT, 1 },
	{ 62, YYAT_SHIFT, 2 },
	{ 62, YYAT_SHIFT, 3 },
	{ 62, YYAT_SHIFT, 4 },
	{ 62, YYAT_SHIFT, 5 },
	{ 62, YYAT_SHIFT, 6 },
	{ 62, YYAT_SHIFT, 7 },
	{ 44, YYAT_SHIFT, 55 },
	{ 62, YYAT_SHIFT, 8 },
	{ 62, YYAT_SHIFT, 9 },
	{ 48, YYAT_SHIFT, 36 },
	{ 48, YYAT_SHIFT, 37 },
	{ 59, YYAT_SHIFT, 28 },
	{ 59, YYAT_SHIFT, 3 },
	{ 27, YYAT_SHIFT, 43 },
	{ 62, YYAT_SHIFT, 10 },
	{ 27, YYAT_SHIFT, 44 },
	{ 41, YYAT_SHIFT, 54 },
	{ 62, YYAT_SHIFT, 11 },
	{ 13, YYAT_SHIFT, 1 },
	{ 13, YYAT_SHIFT, 2 },
	{ 13, YYAT_SHIFT, 3 },
	{ 13, YYAT_SHIFT, 4 },
	{ 13, YYAT_SHIFT, 5 },
	{ 13, YYAT_SHIFT, 6 },
	{ 13, YYAT_SHIFT, 7 },
	{ 59, YYAT_SHIFT, 10 },
	{ 13, YYAT_SHIFT, 8 },
	{ 13, YYAT_SHIFT, 9 },
	{ 59, YYAT_SHIFT, 11 },
	{ 46, YYAT_SHIFT, 34 },
	{ 46, YYAT_SHIFT, 35 },
	{ 46, YYAT_SHIFT, 36 },
	{ 46, YYAT_SHIFT, 37 },
	{ 13, YYAT_SHIFT, 10 },
	{ 47, YYAT_SHIFT, 36 },
	{ 47, YYAT_SHIFT, 37 },
	{ 13, YYAT_SHIFT, 11 },
	{ 58, YYAT_SHIFT, 1 },
	{ 58, YYAT_SHIFT, 2 },
	{ 58, YYAT_SHIFT, 3 },
	{ 58, YYAT_SHIFT, 4 },
	{ 58, YYAT_SHIFT, 5 },
	{ 58, YYAT_SHIFT, 6 },
	{ 58, YYAT_SHIFT, 7 },
	{ 40, YYAT_SHIFT, 53 },
	{ 58, YYAT_SHIFT, 8 },
	{ 58, YYAT_SHIFT, 9 },
	{ 39, YYAT_SHIFT, 52 },
	{ 58, YYAT_SHIFT, 60 },
	{ 64, YYAT_SHIFT, 1 },
	{ 64, YYAT_SHIFT, 2 },
	{ 64, YYAT_SHIFT, 3 },
	{ 64, YYAT_SHIFT, 4 },
	{ 64, YYAT_SHIFT, 5 },
	{ 64, YYAT_SHIFT, 6 },
	{ 64, YYAT_SHIFT, 7 },
	{ 38, YYAT_SHIFT, 51 },
	{ 64, YYAT_SHIFT, 8 },
	{ 64, YYAT_SHIFT, 9 },
	{ 57, YYAT_SHIFT, 1 },
	{ 57, YYAT_SHIFT, 2 },
	{ 57, YYAT_SHIFT, 3 },
	{ 57, YYAT_SHIFT, 4 },
	{ 57, YYAT_SHIFT, 5 },
	{ 57, YYAT_SHIFT, 6 },
	{ 57, YYAT_SHIFT, 7 },
	{ 30, YYAT_SHIFT, 45 },
	{ 57, YYAT_SHIFT, 8 },
	{ 57, YYAT_SHIFT, 9 },
	{ 63, YYAT_SHIFT, 1 },
	{ 63, YYAT_SHIFT, 2 },
	{ 25, YYAT_SHIFT, 42 },
	{ 63, YYAT_SHIFT, 4 },
	{ 63, YYAT_SHIFT, 5 },
	{ 63, YYAT_SHIFT, 6 },
	{ 63, YYAT_SHIFT, 7 },
	{ 56, YYAT_SHIFT, 59 },
	{ 63, YYAT_SHIFT, 8 },
	{ 63, YYAT_SHIFT, 9 },
	{ 61, YYAT_SHIFT, 33 },
	{ 61, YYAT_SHIFT, 34 },
	{ 61, YYAT_SHIFT, 35 },
	{ 61, YYAT_SHIFT, 36 },
	{ 61, YYAT_SHIFT, 37 },
	{ 19, YYAT_SHIFT, 32 },
	{ 61, YYAT_SHIFT, 63 },
	{ 15, YYAT_ACCEPT, 0 },
	{ 56, YYAT_ERROR, 0 },
	{ 9, YYAT_SHIFT, 26 },
	{ 6, YYAT_SHIFT, 24 },
	{ 5, YYAT_SHIFT, 23 },
	{ 4, YYAT_SHIFT, 22 },
	{ 2, YYAT_SHIFT, 21 }
};

YYCONST yystateaction_t YYNEARFAR YYBASED_CODE YYDCDECL yystateaction[] = {
	{ 0, 0, YYAT_DEFAULT, 63 },
	{ 0, 0, YYAT_REDUCE, 12 },
	{ -175, 1, YYAT_REDUCE, 28 },
	{ 0, 0, YYAT_REDUCE, 29 },
	{ -182, 1, YYAT_ERROR, 0 },
	{ -183, 1, YYAT_ERROR, 0 },
	{ -184, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_DEFAULT, 63 },
	{ 0, 0, YYAT_REDUCE, 10 },
	{ -168, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_DEFAULT, 59 },
	{ 0, 0, YYAT_DEFAULT, 59 },
	{ 0, 0, YYAT_REDUCE, 6 },
	{ -237, 1, YYAT_REDUCE, 1 },
	{ 0, 0, YYAT_REDUCE, 3 },
	{ 87, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 4 },
	{ 0, 0, YYAT_REDUCE, 5 },
	{ 0, 0, YYAT_REDUCE, 7 },
	{ -179, 1, YYAT_DEFAULT, 56 },
	{ 0, 0, YYAT_REDUCE, 9 },
	{ 0, 0, YYAT_DEFAULT, 59 },
	{ 0, 0, YYAT_DEFAULT, 59 },
	{ 0, 0, YYAT_DEFAULT, 59 },
	{ 0, 0, YYAT_DEFAULT, 59 },
	{ -191, 1, YYAT_DEFAULT, 63 },
	{ 0, 0, YYAT_REDUCE, 15 },
	{ -250, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 28 },
	{ 0, 0, YYAT_REDUCE, 26 },
	{ -208, 1, YYAT_DEFAULT, 61 },
	{ 0, 0, YYAT_REDUCE, 2 },
	{ 0, 0, YYAT_REDUCE, 11 },
	{ 0, 0, YYAT_DEFAULT, 59 },
	{ 0, 0, YYAT_DEFAULT, 59 },
	{ 0, 0, YYAT_DEFAULT, 59 },
	{ 0, 0, YYAT_DEFAULT, 59 },
	{ 0, 0, YYAT_DEFAULT, 59 },
	{ -207, 1, YYAT_DEFAULT, 56 },
	{ -216, 1, YYAT_DEFAULT, 56 },
	{ -230, 1, YYAT_DEFAULT, 61 },
	{ -258, 1, YYAT_DEFAULT, 61 },
	{ 0, 0, YYAT_REDUCE, 8 },
	{ 0, 0, YYAT_REDUCE, 13 },
	{ -250, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 27 },
	{ -240, 1, YYAT_REDUCE, 21 },
	{ -237, 1, YYAT_REDUCE, 22 },
	{ -262, 1, YYAT_REDUCE, 23 },
	{ 0, 0, YYAT_REDUCE, 24 },
	{ 0, 0, YYAT_REDUCE, 25 },
	{ 0, 0, YYAT_REDUCE, 16 },
	{ 0, 0, YYAT_DEFAULT, 59 },
	{ 0, 0, YYAT_DEFAULT, 63 },
	{ 0, 0, YYAT_DEFAULT, 63 },
	{ 0, 0, YYAT_REDUCE, 14 },
	{ -187, 1, YYAT_DEFAULT, 61 },
	{ -196, 1, YYAT_REDUCE, 20 },
	{ -218, 1, YYAT_REDUCE, 17 },
	{ -245, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_DEFAULT, 63 },
	{ -189, 1, YYAT_ERROR, 0 },
	{ -256, 1, YYAT_REDUCE, 18 },
	{ -186, 1, YYAT_DEFAULT, 59 },
	{ -206, 1, YYAT_REDUCE, 19 }
};

int YYNEAR YYDCDECL yynontermgoto_size = 29;

YYCONST yynontermgoto_t YYNEARFAR YYBASED_CODE YYDCDECL yynontermgoto[] = {
	{ 64, 31 },
	{ 64, 20 },
	{ 60, 62 },
	{ 64, 18 },
	{ 64, 12 },
	{ 64, 16 },
	{ 64, 17 },
	{ 64, 19 },
	{ 63, 64 },
	{ 63, 14 },
	{ 0, 15 },
	{ 0, 13 },
	{ 59, 61 },
	{ 54, 58 },
	{ 53, 57 },
	{ 52, 56 },
	{ 37, 50 },
	{ 36, 49 },
	{ 35, 48 },
	{ 34, 47 },
	{ 33, 46 },
	{ 24, 41 },
	{ 23, 40 },
	{ 22, 39 },
	{ 21, 38 },
	{ 11, 30 },
	{ 10, 29 },
	{ 9, 27 },
	{ 7, 25 }
};

YYCONST yystategoto_t YYNEARFAR YYBASED_CODE YYDCDECL yystategoto[] = {
	{ 9, 63 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 26, 63 },
	{ 0, -1 },
	{ 22, -1 },
	{ 16, -1 },
	{ 15, -1 },
	{ 0, -1 },
	{ 0, 64 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 14, -1 },
	{ 13, -1 },
	{ 12, -1 },
	{ 11, -1 },
	{ 0, 64 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 10, -1 },
	{ 9, -1 },
	{ 8, -1 },
	{ 7, -1 },
	{ 6, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 5, -1 },
	{ 12, 63 },
	{ 11, 63 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, 64 },
	{ 0, 64 },
	{ 2, -1 },
	{ 0, 63 },
	{ 0, -1 },
	{ 0, 64 },
	{ 6, 64 },
	{ -3, -1 }
};

YYCONST yydestructor_t YYNEARFAR *YYNEAR YYDCDECL yydestructorptr = NULL;

YYCONST yytokendest_t YYNEARFAR *YYNEAR YYDCDECL yytokendestptr = NULL;
int YYNEAR YYDCDECL yytokendest_size = 0;

YYCONST yytokendestbase_t YYNEARFAR *YYNEAR YYDCDECL yytokendestbaseptr = NULL;
int YYNEAR YYDCDECL yytokendestbase_size = 0;
#line 110 ".\\parser.y"


/////////////////////////////////////////////////////////////////////////////
// programs section

int main(void)
{
	yyparse();
	system("Pause");
	return 0;
}


