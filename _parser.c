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
* _parser.c
* C source file generated from _parser.y.
* 
* Date: 12/27/16
* Time: 23:21:25
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

#line 1 ".\\_parser.y"

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

#line 63 "_parser.c"
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

#include ".\_parser.h"

#ifndef YYSTYPE
#define YYSTYPE int
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
			YYSTYPE YYFAR *yya[7];
			yyinitdebug(yya, 7);
#endif
			{
#line 65 ".\\_parser.y"
root = yyattribute(5 - 6);
#line 189 "_parser.c"
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
#line 68 ".\\_parser.y"
YYSTYPE t = yyattribute(1 - 2);
										if (t!=NULL)
										{
											while(t->sibling)
												t = t->sibling;
											t->sibling = yyattribute(2 - 2);
											yyval=yyattribute(1 - 2);
										}
										else
											yyval=yyattribute(3 - 2);
									
#line 212 "_parser.c"
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
#line 79 ".\\_parser.y"
yyval=yyattribute(1 - 1);
#line 225 "_parser.c"
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
#line 82 ".\\_parser.y"
 yyval = yyattribute(1 - 1); 
#line 238 "_parser.c"
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
#line 83 ".\\_parser.y"
 yyval = yyattribute(1 - 1); 
#line 251 "_parser.c"
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
#line 84 ".\\_parser.y"
 yyval = yyattribute(1 - 1); 
#line 264 "_parser.c"
			}
		}
		break;
	case 6:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[4];
			yyinitdebug(yya, 4);
#endif
			{
#line 86 ".\\_parser.y"
 yyval = yyattribute(2 - 3); 
#line 277 "_parser.c"
			}
		}
		break;
	case 7:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 87 ".\\_parser.y"
 yyval = yyattribute(1 - 1); 
#line 290 "_parser.c"
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
#line 88 ".\\_parser.y"
 yyval = newStmtNode(EmptyK); 
#line 303 "_parser.c"
			}
		}
		break;
	case 9:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[3];
			yyinitdebug(yya, 3);
#endif
			{
#line 89 ".\\_parser.y"
 yyval = yyattribute(1 - 2); 
#line 316 "_parser.c"
			}
		}
		break;
	case 10:
		{
#line 90 ".\\_parser.y"
 yyval = NULL;
#line 324 "_parser.c"
		}
		break;
	case 11:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 91 ".\\_parser.y"
 yyval = NULL; 
#line 336 "_parser.c"
			}
		}
		break;
	case 12:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 92 ".\\_parser.y"
 yyval = yyattribute(1 - 1);
#line 349 "_parser.c"
			}
		}
		break;
	case 13:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 93 ".\\_parser.y"
 yyval = yyattribute(1 - 1);
#line 362 "_parser.c"
			}
		}
		break;
	case 14:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[6];
			yyinitdebug(yya, 6);
#endif
			{
#line 96 ".\\_parser.y"
	yyval = newStmtNode(OutputK);
										yyval->child[0] = yyattribute(3 - 5);
									
#line 377 "_parser.c"
			}
		}
		break;
	case 15:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[6];
			yyinitdebug(yya, 6);
#endif
			{
#line 101 ".\\_parser.y"
	yyval = newStmtNode(InputK);
										yyval->child[0] = yyattribute(3 - 5);
									
#line 392 "_parser.c"
			}
		}
		break;
	case 16:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[4];
			yyinitdebug(yya, 4);
#endif
			{
#line 106 ".\\_parser.y"
	yyval = newStmtNode(DeclK);
										yyval->child[0]=yyattribute(2 - 3);
										yyval->attr.name=copyString(recordString);//TODO:TYPE need to return type name.replace ???Finished
									
#line 408 "_parser.c"
			}
		}
		break;
	case 17:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[4];
			yyinitdebug(yya, 4);
#endif
			{
#line 112 ".\\_parser.y"
	printf("IN idlist\n");
										yyval = newExpNode(IdlistK);
										yyval->type = declareType;
										yyval->child[0]=yyattribute(1 - 3);
										//$$->attr.name=???;TODO:ID need to return id name.replace ???Finished
										yyattribute(3 - 3) = newExpNode(IdK);
										yyattribute(3 - 3)->attr.name=copyString(recordString);
										yyattribute(3 - 3)->type = declareType;
										yyval->child[1]=yyattribute(3 - 3);
										if(insert(&symbol_table,recordString,declareType))
											printf("insert OK");
										else
											printf("insert failed");
									
#line 434 "_parser.c"
			}
		}
		break;
	case 18:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[4];
			yyinitdebug(yya, 4);
#endif
			{
#line 126 ".\\_parser.y"
	yyval = newExpNode(IdlistK);
											yyval->type = declareType;
											yyval->child[0] = yyattribute(1 - 3);
											yyval->child[1] = yyattribute(3 - 3);
											//$$->attr.name = "=";
										
#line 452 "_parser.c"
			}
		}
		break;
	case 19:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 132 ".\\_parser.y"
	printf("  %p  ",recordString);
										//savedName = ;
										yyval = newExpNode(IdK);
										yyval->attr.name = copyString(recordString);
										yyval->type = declareType;
										if(insert(&symbol_table,recordString,declareType))
											printf("insert OK");
										else
											printf("insert failed");
									
#line 474 "_parser.c"
			}
		}
		break;
	case 20:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 142 ".\\_parser.y"
	yyval = yyattribute(1 - 1) ;
#line 487 "_parser.c"
			}
		}
		break;
	case 21:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 146 ".\\_parser.y"
	savedName = copyString(recordString);
#line 500 "_parser.c"
			}
		}
		break;
	case 22:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[5];
			yyinitdebug(yya, 5);
#endif
			{
#line 147 ".\\_parser.y"
	yyval = newExpNode(InitK);
										yyval->attr.name = savedName;
										yyval->type = declareType;
										yyval->child[0] = yyattribute(4 - 4);
										if(insert(&symbol_table,savedName,declareType))
											printf("insert OK");
										else
											printf("insert failed");
									
#line 521 "_parser.c"
			}
		}
		break;
	case 23:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[6];
			yyinitdebug(yya, 6);
#endif
			{
#line 167 ".\\_parser.y"
	yyval = newStmtNode(IfK);
																	yyval->child[0]=yyattribute(3 - 5);
																	yyval->child[1]=yyattribute(5 - 5);
																	yyval->lineno = savedLineno;
																
#line 538 "_parser.c"
			}
		}
		break;
	case 24:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[8];
			yyinitdebug(yya, 8);
#endif
			{
#line 172 ".\\_parser.y"
	yyval = newStmtNode(IfElseK);
																	yyval->child[0]=yyattribute(3 - 7);
																	yyval->child[1]=yyattribute(5 - 7);
																	yyval->child[2]=yyattribute(7 - 7);
																	yyval->lineno = savedLineno;
																
#line 556 "_parser.c"
			}
		}
		break;
	case 25:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[10];
			yyinitdebug(yya, 10);
#endif
			{
#line 180 ".\\_parser.y"
	yyval = newStmtNode(ForK);
																	yyval->child[0] = yyattribute(3 - 9);
																	yyval->child[1] = yyattribute(5 - 9);
																	yyval->child[2] = yyattribute(7 - 9);
																	yyval->child[3] = yyattribute(9 - 9);
																
#line 574 "_parser.c"
			}
		}
		break;
	case 26:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[6];
			yyinitdebug(yya, 6);
#endif
			{
#line 188 ".\\_parser.y"
	yyval = newStmtNode(WhileK);
																	yyval->child[0] = yyattribute(3 - 5);
																	yyval->child[1] = yyattribute(5 - 5);
																	yyval->lineno = savedLineno;
																
#line 591 "_parser.c"
			}
		}
		break;
	case 27:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[4];
			yyinitdebug(yya, 4);
#endif
			{
#line 196 ".\\_parser.y"
	yyval = newExpNode(OpK);
																	yyval->attr.op = EQ;
																	yyval->child[0]=yyattribute(1 - 3);
																	yyval->child[1]=yyattribute(3 - 3);
																
#line 608 "_parser.c"
			}
		}
		break;
	case 28:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[4];
			yyinitdebug(yya, 4);
#endif
			{
#line 202 ".\\_parser.y"
	yyval = newExpNode(OpK);
																	yyval->attr.op = NEQ;
																	yyval->child[0]=yyattribute(1 - 3);
																	yyval->child[1]=yyattribute(3 - 3);
																
#line 625 "_parser.c"
			}
		}
		break;
	case 29:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[4];
			yyinitdebug(yya, 4);
#endif
			{
#line 207 ".\\_parser.y"
	yyval = newExpNode(OpK);
																	yyval->attr.op = LTE;
																	yyval->child[0]=yyattribute(1 - 3);
																	yyval->child[1]=yyattribute(3 - 3);
																
#line 642 "_parser.c"
			}
		}
		break;
	case 30:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[4];
			yyinitdebug(yya, 4);
#endif
			{
#line 212 ".\\_parser.y"
	yyval = newExpNode(OpK);
																	yyval->attr.op = GTE;
																	yyval->child[0]=yyattribute(1 - 3);
																	yyval->child[1]=yyattribute(3 - 3);
																
#line 659 "_parser.c"
			}
		}
		break;
	case 31:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[4];
			yyinitdebug(yya, 4);
#endif
			{
#line 217 ".\\_parser.y"
	yyval = newExpNode(OpK);
																	yyval->attr.op = bAND;
																	yyval->child[0]=yyattribute(1 - 3);
																	yyval->child[1]=yyattribute(3 - 3);
																
#line 676 "_parser.c"
			}
		}
		break;
	case 32:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[4];
			yyinitdebug(yya, 4);
#endif
			{
#line 222 ".\\_parser.y"
	yyval = newExpNode(OpK);
																	yyval->attr.op = bOR;
																	yyval->child[0]=yyattribute(1 - 3);
																	yyval->child[1]=yyattribute(3 - 3);
																
#line 693 "_parser.c"
			}
		}
		break;
	case 33:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[3];
			yyinitdebug(yya, 3);
#endif
			{
#line 227 ".\\_parser.y"
	yyval = newExpNode(OpK);
																	yyval->attr.op = bNOT;
																	yyval->child[0]=yyattribute(2 - 2);
																
#line 709 "_parser.c"
			}
		}
		break;
	case 34:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[3];
			yyinitdebug(yya, 3);
#endif
			{
#line 231 ".\\_parser.y"
	yyval = newExpNode(OpK);
																	yyval->attr.op = NOT;
																	yyval->child[0]=yyattribute(2 - 2);
																
#line 725 "_parser.c"
			}
		}
		break;
	case 35:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[4];
			yyinitdebug(yya, 4);
#endif
			{
#line 235 ".\\_parser.y"
	yyval = newExpNode(OpK);
																	yyval->attr.op = MOD;
																	yyval->child[0]=yyattribute(1 - 3);
																	yyval->child[1]=yyattribute(3 - 3);
																
#line 742 "_parser.c"
			}
		}
		break;
	case 36:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[3];
			yyinitdebug(yya, 3);
#endif
			{
#line 240 ".\\_parser.y"
	yyval = newExpNode(OpK);
																	yyval->attr.op = SADD_F;
																	yyval->child[0]=yyattribute(2 - 2);
																
#line 758 "_parser.c"
			}
		}
		break;
	case 37:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[3];
			yyinitdebug(yya, 3);
#endif
			{
#line 244 ".\\_parser.y"
	yyval = newExpNode(OpK);
																	yyval->attr.op = SADD_B;
																	yyval->child[0]=yyattribute(1 - 2);
																
#line 774 "_parser.c"
			}
		}
		break;
	case 38:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[3];
			yyinitdebug(yya, 3);
#endif
			{
#line 248 ".\\_parser.y"
	yyval = newExpNode(OpK);
																	yyval->attr.op = SSUB_F;
																	yyval->child[0]=yyattribute(2 - 2);
																
#line 790 "_parser.c"
			}
		}
		break;
	case 39:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[3];
			yyinitdebug(yya, 3);
#endif
			{
#line 252 ".\\_parser.y"
	yyval = newExpNode(OpK);
																	yyval->attr.op = SSUB_B;
																	yyval->child[0]=yyattribute(1 - 2);
																
#line 806 "_parser.c"
			}
		}
		break;
	case 40:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[4];
			yyinitdebug(yya, 4);
#endif
			{
#line 257 ".\\_parser.y"
	yyval = newExpNode(OpK);
																	yyval->attr.op = LT;
																	yyval->child[0]=yyattribute(1 - 3);
																	yyval->child[1]=yyattribute(3 - 3);
																
#line 823 "_parser.c"
			}
		}
		break;
	case 41:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[4];
			yyinitdebug(yya, 4);
#endif
			{
#line 262 ".\\_parser.y"
	yyval = newExpNode(OpK);
																	yyval->attr.op = GT;
																	yyval->child[0]=yyattribute(1 - 3);
																	yyval->child[1]=yyattribute(3 - 3);
																
#line 840 "_parser.c"
			}
		}
		break;
	case 42:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[4];
			yyinitdebug(yya, 4);
#endif
			{
#line 267 ".\\_parser.y"
	yyval = newExpNode(OpK);
																	yyval->attr.op = ADD;
																	yyval->child[0]=yyattribute(1 - 3);
																	yyval->child[1]=yyattribute(3 - 3);
																
#line 857 "_parser.c"
			}
		}
		break;
	case 43:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[4];
			yyinitdebug(yya, 4);
#endif
			{
#line 272 ".\\_parser.y"
	yyval = newExpNode(OpK);
																	yyval->attr.op = SUB;
																	yyval->child[0]=yyattribute(1 - 3);
																	yyval->child[1]=yyattribute(3 - 3);
																
#line 874 "_parser.c"
			}
		}
		break;
	case 44:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[4];
			yyinitdebug(yya, 4);
#endif
			{
#line 277 ".\\_parser.y"
	yyval = newExpNode(OpK);
																	yyval->attr.op = MUL;
																	yyval->child[0]=yyattribute(1 - 3);
																	yyval->child[1]=yyattribute(3 - 3);
																
#line 891 "_parser.c"
			}
		}
		break;
	case 45:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[4];
			yyinitdebug(yya, 4);
#endif
			{
#line 282 ".\\_parser.y"
	yyval = newExpNode(OpK);
																	yyval->attr.op = DIV;
																	yyval->child[0]=yyattribute(1 - 3);
																	yyval->child[1]=yyattribute(3 - 3);
																
#line 908 "_parser.c"
			}
		}
		break;
	case 46:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[3];
			yyinitdebug(yya, 3);
#endif
			{
#line 287 ".\\_parser.y"
	yyval = newExpNode(OpK);
																	yyval->attr.op = UMINUS;
																	yyval->child[0] = yyattribute(2 - 2);
																
#line 924 "_parser.c"
			}
		}
		break;
	case 47:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[4];
			yyinitdebug(yya, 4);
#endif
			{
#line 291 ".\\_parser.y"
	yyval=yyattribute(2 - 3);	
#line 937 "_parser.c"
			}
		}
		break;
	case 48:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 292 ".\\_parser.y"
	yyval = newExpNode(IdK);	
																	yyval->attr.name = copyString(recordString);
																	if(!lookup(symbol_table,recordString))
																		printf("Unknown Id!\n");
																
#line 954 "_parser.c"
			}
		}
		break;
	case 49:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 297 ".\\_parser.y"
	yyval = newExpNode(ConstCK);
																	yyval->attr.charVal = recordChar;
																	yyval->type = Char;
																
#line 970 "_parser.c"
			}
		}
		break;
	case 50:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 301 ".\\_parser.y"
	yyval = newExpNode(ConstK);
																	yyval->attr.val = recordInt;
																	yyval->type = Int;
																
#line 986 "_parser.c"
			}
		}
		break;
	case 51:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[4];
			yyinitdebug(yya, 4);
#endif
			{
#line 305 ".\\_parser.y"
	yyval = newExpNode(OpK);
																	yyval->attr.op = AND;
																	yyval->child[0]=yyattribute(1 - 3);
																	yyval->child[1]=yyattribute(3 - 3);
																
#line 1003 "_parser.c"
			}
		}
		break;
	case 52:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[4];
			yyinitdebug(yya, 4);
#endif
			{
#line 310 ".\\_parser.y"
	yyval = newExpNode(OpK);
																	yyval->attr.op = OR;
																	yyval->child[0]=yyattribute(1 - 3);
																	yyval->child[1]=yyattribute(3 - 3);
																
#line 1020 "_parser.c"
			}
		}
		break;
	case 53:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[4];
			yyinitdebug(yya, 4);
#endif
			{
#line 315 ".\\_parser.y"
	yyval = newExpNode(OpK);
																	yyval->attr.op = LS;
																	yyval->child[0]=yyattribute(1 - 3);
																	yyval->child[1]=yyattribute(3 - 3);
																
#line 1037 "_parser.c"
			}
		}
		break;
	case 54:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[4];
			yyinitdebug(yya, 4);
#endif
			{
#line 320 ".\\_parser.y"
	yyval = newExpNode(OpK);
																	yyval->attr.op = RS;
																	yyval->child[0]=yyattribute(1 - 3);
																	yyval->child[1]=yyattribute(3 - 3);
																
#line 1054 "_parser.c"
			}
		}
		break;
	case 55:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[4];
			yyinitdebug(yya, 4);
#endif
			{
#line 325 ".\\_parser.y"
	yyval = newExpNode(OpK);
																	yyval->attr.op = bXOR;
																	yyval->child[0]=yyattribute(1 - 3);
																	yyval->child[1]=yyattribute(3 - 3);
																
#line 1071 "_parser.c"
			}
		}
		break;
	case 56:
		{
#line 330 ".\\_parser.y"
	yyval = NULL;
#line 1079 "_parser.c"
		}
		break;
	case 57:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[4];
			yyinitdebug(yya, 4);
#endif
			{
#line 331 ".\\_parser.y"
	yyval = newExpNode(OpK);
																	yyval->attr.op = ASSIGN;
																	yyval->child[0]=yyattribute(1 - 3);
																	yyval->child[1]=yyattribute(3 - 3);
																
#line 1095 "_parser.c"
			}
		}
		break;
	case 58:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 336 ".\\_parser.y"
	yyval=NULL;	
#line 1108 "_parser.c"
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
	{ "MAIN", 268 },
	{ "CHAR", 269 },
	{ "OUTPUT", 270 },
	{ "INPUT", 271 },
	{ "ASSIGN", 276 },
	{ "OR", 277 },
	{ "AND", 278 },
	{ "bOR", 279 },
	{ "bXOR", 280 },
	{ "bAND", 281 },
	{ "EQ", 282 },
	{ "NEQ", 283 },
	{ "LT", 284 },
	{ "GT", 285 },
	{ "LTE", 286 },
	{ "GTE", 287 },
	{ "LS", 288 },
	{ "RS", 289 },
	{ "ADD", 290 },
	{ "SUB", 291 },
	{ "MUL", 292 },
	{ "DIV", 293 },
	{ "MOD", 294 },
	{ "bNOT", 295 },
	{ "SADD", 296 },
	{ "SSUB", 297 },
	{ "NOT", 298 },
	{ "UMINUS", 299 },
	{ "LE", 300 },
	{ "RE", 301 },
	{ NULL, 0 }
};

YYCONST char *YYCONST YYNEARFAR YYBASED_CODE YYDCDECL yyrule[] = {
	"$accept: program",
	"program: MAIN LE RE LB stmt_seq RB",
	"stmt_seq: stmt_seq stmt",
	"stmt_seq: stmt",
	"stmt: for_stmt",
	"stmt: while_stmt",
	"stmt: if_stmt",
	"stmt: LB stmt_seq RB",
	"stmt: decl_stmt",
	"stmt: SEMI",
	"stmt: expr SEMI",
	"stmt:",
	"stmt: error",
	"stmt: output_stmt",
	"stmt: input_stmt",
	"output_stmt: OUTPUT LE expr RE SEMI",
	"input_stmt: INPUT LE expr RE SEMI",
	"decl_stmt: TYPE idlist SEMI",
	"idlist: idlist COM ID",
	"idlist: idlist COM init",
	"idlist: ID",
	"idlist: init",
	"$$1:",
	"init: ID $$1 ASSIGN expr",
	"if_stmt: IF LE expr RE stmt",
	"if_stmt: IF LE expr RE stmt ELSE stmt",
	"for_stmt: FOR LE expr SEMI expr SEMI expr RE stmt",
	"while_stmt: WHILE LE expr RE stmt",
	"expr: expr EQ expr",
	"expr: expr NEQ expr",
	"expr: expr LTE expr",
	"expr: expr GTE expr",
	"expr: expr bAND expr",
	"expr: expr bOR expr",
	"expr: bNOT expr",
	"expr: NOT expr",
	"expr: expr MOD expr",
	"expr: SADD expr",
	"expr: expr SADD",
	"expr: SSUB expr",
	"expr: expr SSUB",
	"expr: expr LT expr",
	"expr: expr GT expr",
	"expr: expr ADD expr",
	"expr: expr SUB expr",
	"expr: expr MUL expr",
	"expr: expr DIV expr",
	"expr: SUB expr",
	"expr: LE expr RE",
	"expr: ID",
	"expr: CHAR",
	"expr: INT",
	"expr: expr AND expr",
	"expr: expr OR expr",
	"expr: expr LS expr",
	"expr: expr RS expr",
	"expr: expr bXOR expr",
	"expr:",
	"expr: expr ASSIGN expr",
	"expr: error"
};
#endif

YYCONST yyreduction_t YYNEARFAR YYBASED_CODE YYDCDECL yyreduction[] = {
	{ 0, 1, -1 },
	{ 1, 6, 0 },
	{ 2, 2, 1 },
	{ 2, 1, 2 },
	{ 3, 1, 3 },
	{ 3, 1, 4 },
	{ 3, 1, 5 },
	{ 3, 3, 6 },
	{ 3, 1, 7 },
	{ 3, 1, 8 },
	{ 3, 2, 9 },
	{ 3, 0, 10 },
	{ 3, 1, 11 },
	{ 3, 1, 12 },
	{ 3, 1, 13 },
	{ 4, 5, 14 },
	{ 5, 5, 15 },
	{ 6, 3, 16 },
	{ 7, 3, 17 },
	{ 7, 3, 18 },
	{ 7, 1, 19 },
	{ 7, 1, 20 },
	{ 9, 0, 21 },
	{ 8, 4, 22 },
	{ 10, 5, 23 },
	{ 10, 7, 24 },
	{ 11, 9, 25 },
	{ 12, 5, 26 },
	{ 13, 3, 27 },
	{ 13, 3, 28 },
	{ 13, 3, 29 },
	{ 13, 3, 30 },
	{ 13, 3, 31 },
	{ 13, 3, 32 },
	{ 13, 2, 33 },
	{ 13, 2, 34 },
	{ 13, 3, 35 },
	{ 13, 2, 36 },
	{ 13, 2, 37 },
	{ 13, 2, 38 },
	{ 13, 2, 39 },
	{ 13, 3, 40 },
	{ 13, 3, 41 },
	{ 13, 3, 42 },
	{ 13, 3, 43 },
	{ 13, 3, 44 },
	{ 13, 3, 45 },
	{ 13, 2, 46 },
	{ 13, 3, 47 },
	{ 13, 1, 48 },
	{ 13, 1, 49 },
	{ 13, 1, 50 },
	{ 13, 3, 51 },
	{ 13, 3, 52 },
	{ 13, 3, 53 },
	{ 13, 3, 54 },
	{ 13, 3, 55 },
	{ 13, 0, 56 },
	{ 13, 3, 57 },
	{ 13, 1, 58 }
};

int YYNEAR YYDCDECL yytokenaction_size = 985;
YYCONST yytokenaction_t YYNEARFAR YYBASED_CODE YYDCDECL yytokenaction[] = {
	{ 118, YYAT_SHIFT, 52 },
	{ 118, YYAT_SHIFT, 53 },
	{ 118, YYAT_SHIFT, 54 },
	{ 118, YYAT_SHIFT, 55 },
	{ 118, YYAT_SHIFT, 56 },
	{ 118, YYAT_SHIFT, 57 },
	{ 118, YYAT_SHIFT, 58 },
	{ 118, YYAT_SHIFT, 59 },
	{ 118, YYAT_SHIFT, 60 },
	{ 118, YYAT_SHIFT, 61 },
	{ 118, YYAT_SHIFT, 62 },
	{ 118, YYAT_SHIFT, 63 },
	{ 118, YYAT_SHIFT, 64 },
	{ 118, YYAT_SHIFT, 65 },
	{ 118, YYAT_SHIFT, 66 },
	{ 118, YYAT_SHIFT, 67 },
	{ 118, YYAT_SHIFT, 68 },
	{ 118, YYAT_SHIFT, 69 },
	{ 118, YYAT_SHIFT, 70 },
	{ 112, YYAT_SHIFT, 117 },
	{ 118, YYAT_SHIFT, 71 },
	{ 118, YYAT_SHIFT, 72 },
	{ 38, YYAT_SHIFT, 78 },
	{ 109, YYAT_SHIFT, 115 },
	{ 38, YYAT_SHIFT, 79 },
	{ 118, YYAT_SHIFT, 120 },
	{ 113, YYAT_SHIFT, 52 },
	{ 113, YYAT_SHIFT, 53 },
	{ 113, YYAT_SHIFT, 54 },
	{ 113, YYAT_SHIFT, 55 },
	{ 113, YYAT_SHIFT, 56 },
	{ 113, YYAT_SHIFT, 57 },
	{ 113, YYAT_SHIFT, 58 },
	{ 113, YYAT_SHIFT, 59 },
	{ 113, YYAT_SHIFT, 60 },
	{ 113, YYAT_SHIFT, 61 },
	{ 113, YYAT_SHIFT, 62 },
	{ 113, YYAT_SHIFT, 63 },
	{ 113, YYAT_SHIFT, 64 },
	{ 113, YYAT_SHIFT, 65 },
	{ 113, YYAT_SHIFT, 66 },
	{ 113, YYAT_SHIFT, 67 },
	{ 113, YYAT_SHIFT, 68 },
	{ 113, YYAT_SHIFT, 69 },
	{ 113, YYAT_SHIFT, 70 },
	{ 110, YYAT_SHIFT, 116 },
	{ 113, YYAT_SHIFT, 71 },
	{ 113, YYAT_SHIFT, 72 },
	{ 83, YYAT_SHIFT, 52 },
	{ 83, YYAT_SHIFT, 53 },
	{ 83, YYAT_SHIFT, 54 },
	{ 83, YYAT_SHIFT, 55 },
	{ 83, YYAT_SHIFT, 56 },
	{ 83, YYAT_SHIFT, 57 },
	{ 83, YYAT_SHIFT, 58 },
	{ 83, YYAT_SHIFT, 59 },
	{ 83, YYAT_SHIFT, 60 },
	{ 83, YYAT_SHIFT, 61 },
	{ 83, YYAT_SHIFT, 62 },
	{ 83, YYAT_SHIFT, 63 },
	{ 83, YYAT_SHIFT, 64 },
	{ 83, YYAT_SHIFT, 65 },
	{ 83, YYAT_SHIFT, 66 },
	{ 83, YYAT_SHIFT, 67 },
	{ 83, YYAT_SHIFT, 68 },
	{ 83, YYAT_SHIFT, 69 },
	{ 83, YYAT_SHIFT, 70 },
	{ 108, YYAT_SHIFT, 114 },
	{ 83, YYAT_SHIFT, 71 },
	{ 83, YYAT_SHIFT, 72 },
	{ 36, YYAT_SHIFT, 6 },
	{ 36, YYAT_SHIFT, 7 },
	{ 36, YYAT_SHIFT, 8 },
	{ 36, YYAT_SHIFT, 9 },
	{ 36, YYAT_SHIFT, 10 },
	{ 36, YYAT_SHIFT, 11 },
	{ 36, YYAT_SHIFT, 12 },
	{ 36, YYAT_SHIFT, 76 },
	{ 36, YYAT_SHIFT, 13 },
	{ 36, YYAT_SHIFT, 14 },
	{ 101, YYAT_SHIFT, 71 },
	{ 101, YYAT_SHIFT, 72 },
	{ 110, YYAT_ERROR, 0 },
	{ 36, YYAT_SHIFT, 15 },
	{ 36, YYAT_SHIFT, 16 },
	{ 36, YYAT_SHIFT, 17 },
	{ 26, YYAT_SHIFT, 6 },
	{ 26, YYAT_SHIFT, 7 },
	{ 26, YYAT_SHIFT, 8 },
	{ 26, YYAT_SHIFT, 9 },
	{ 26, YYAT_SHIFT, 10 },
	{ 26, YYAT_SHIFT, 11 },
	{ 26, YYAT_SHIFT, 12 },
	{ 26, YYAT_SHIFT, 49 },
	{ 26, YYAT_SHIFT, 13 },
	{ 26, YYAT_SHIFT, 14 },
	{ 100, YYAT_SHIFT, 71 },
	{ 100, YYAT_SHIFT, 72 },
	{ 106, YYAT_REDUCE, 22 },
	{ 26, YYAT_SHIFT, 15 },
	{ 26, YYAT_SHIFT, 16 },
	{ 26, YYAT_SHIFT, 17 },
	{ 98, YYAT_SHIFT, 68 },
	{ 98, YYAT_SHIFT, 69 },
	{ 98, YYAT_SHIFT, 70 },
	{ 36, YYAT_SHIFT, 18 },
	{ 98, YYAT_SHIFT, 71 },
	{ 98, YYAT_SHIFT, 72 },
	{ 81, YYAT_SHIFT, 109 },
	{ 36, YYAT_SHIFT, 19 },
	{ 36, YYAT_SHIFT, 20 },
	{ 36, YYAT_SHIFT, 21 },
	{ 36, YYAT_SHIFT, 22 },
	{ 80, YYAT_SHIFT, 108 },
	{ 36, YYAT_SHIFT, 23 },
	{ 79, YYAT_SHIFT, 106 },
	{ 96, YYAT_SHIFT, 66 },
	{ 96, YYAT_SHIFT, 67 },
	{ 96, YYAT_SHIFT, 68 },
	{ 96, YYAT_SHIFT, 69 },
	{ 96, YYAT_SHIFT, 70 },
	{ 26, YYAT_SHIFT, 18 },
	{ 96, YYAT_SHIFT, 71 },
	{ 96, YYAT_SHIFT, 72 },
	{ 77, YYAT_SHIFT, 105 },
	{ 26, YYAT_SHIFT, 19 },
	{ 26, YYAT_SHIFT, 20 },
	{ 26, YYAT_SHIFT, 21 },
	{ 26, YYAT_SHIFT, 22 },
	{ 75, YYAT_SHIFT, 104 },
	{ 26, YYAT_SHIFT, 23 },
	{ 120, YYAT_SHIFT, 6 },
	{ 120, YYAT_SHIFT, 7 },
	{ 120, YYAT_SHIFT, 8 },
	{ 120, YYAT_SHIFT, 9 },
	{ 120, YYAT_SHIFT, 10 },
	{ 120, YYAT_SHIFT, 11 },
	{ 120, YYAT_SHIFT, 12 },
	{ 74, YYAT_SHIFT, 103 },
	{ 120, YYAT_SHIFT, 13 },
	{ 120, YYAT_SHIFT, 14 },
	{ 99, YYAT_SHIFT, 71 },
	{ 99, YYAT_SHIFT, 72 },
	{ 73, YYAT_SHIFT, 102 },
	{ 120, YYAT_SHIFT, 15 },
	{ 120, YYAT_SHIFT, 16 },
	{ 120, YYAT_SHIFT, 17 },
	{ 117, YYAT_SHIFT, 6 },
	{ 117, YYAT_SHIFT, 7 },
	{ 117, YYAT_SHIFT, 8 },
	{ 117, YYAT_SHIFT, 9 },
	{ 117, YYAT_SHIFT, 10 },
	{ 117, YYAT_SHIFT, 11 },
	{ 117, YYAT_SHIFT, 12 },
	{ 48, YYAT_SHIFT, 82 },
	{ 117, YYAT_SHIFT, 13 },
	{ 117, YYAT_SHIFT, 14 },
	{ 37, YYAT_REDUCE, 22 },
	{ 30, YYAT_SHIFT, 51 },
	{ 17, YYAT_SHIFT, 41 },
	{ 117, YYAT_SHIFT, 15 },
	{ 117, YYAT_SHIFT, 16 },
	{ 117, YYAT_SHIFT, 17 },
	{ 97, YYAT_SHIFT, 68 },
	{ 97, YYAT_SHIFT, 69 },
	{ 97, YYAT_SHIFT, 70 },
	{ 120, YYAT_SHIFT, 18 },
	{ 97, YYAT_SHIFT, 71 },
	{ 97, YYAT_SHIFT, 72 },
	{ 16, YYAT_SHIFT, 40 },
	{ 120, YYAT_SHIFT, 19 },
	{ 120, YYAT_SHIFT, 20 },
	{ 120, YYAT_SHIFT, 21 },
	{ 120, YYAT_SHIFT, 22 },
	{ 14, YYAT_SHIFT, 37 },
	{ 120, YYAT_SHIFT, 23 },
	{ 11, YYAT_SHIFT, 35 },
	{ 95, YYAT_SHIFT, 66 },
	{ 95, YYAT_SHIFT, 67 },
	{ 95, YYAT_SHIFT, 68 },
	{ 95, YYAT_SHIFT, 69 },
	{ 95, YYAT_SHIFT, 70 },
	{ 117, YYAT_SHIFT, 18 },
	{ 95, YYAT_SHIFT, 71 },
	{ 95, YYAT_SHIFT, 72 },
	{ 10, YYAT_SHIFT, 34 },
	{ 117, YYAT_SHIFT, 19 },
	{ 117, YYAT_SHIFT, 20 },
	{ 117, YYAT_SHIFT, 21 },
	{ 117, YYAT_SHIFT, 22 },
	{ 9, YYAT_SHIFT, 33 },
	{ 117, YYAT_SHIFT, 23 },
	{ 104, YYAT_SHIFT, 6 },
	{ 104, YYAT_SHIFT, 7 },
	{ 104, YYAT_SHIFT, 8 },
	{ 104, YYAT_SHIFT, 9 },
	{ 104, YYAT_SHIFT, 10 },
	{ 104, YYAT_SHIFT, 11 },
	{ 104, YYAT_SHIFT, 12 },
	{ 4, YYAT_SHIFT, 5 },
	{ 104, YYAT_SHIFT, 13 },
	{ 104, YYAT_SHIFT, 14 },
	{ 3, YYAT_SHIFT, 4 },
	{ 2, YYAT_ACCEPT, 0 },
	{ 1, YYAT_SHIFT, 3 },
	{ 104, YYAT_SHIFT, 15 },
	{ 104, YYAT_SHIFT, 16 },
	{ 104, YYAT_SHIFT, 17 },
	{ 103, YYAT_SHIFT, 6 },
	{ 103, YYAT_SHIFT, 7 },
	{ 103, YYAT_SHIFT, 8 },
	{ 103, YYAT_SHIFT, 9 },
	{ 103, YYAT_SHIFT, 10 },
	{ 103, YYAT_SHIFT, 11 },
	{ 103, YYAT_SHIFT, 12 },
	{ 0, YYAT_SHIFT, 1 },
	{ 103, YYAT_SHIFT, 13 },
	{ 103, YYAT_SHIFT, 14 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 103, YYAT_SHIFT, 15 },
	{ 103, YYAT_SHIFT, 16 },
	{ 103, YYAT_SHIFT, 17 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 104, YYAT_SHIFT, 18 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 104, YYAT_SHIFT, 19 },
	{ 104, YYAT_SHIFT, 20 },
	{ 104, YYAT_SHIFT, 21 },
	{ 104, YYAT_SHIFT, 22 },
	{ -1, YYAT_ERROR, 0 },
	{ 104, YYAT_SHIFT, 23 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 103, YYAT_SHIFT, 18 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 103, YYAT_SHIFT, 19 },
	{ 103, YYAT_SHIFT, 20 },
	{ 103, YYAT_SHIFT, 21 },
	{ 103, YYAT_SHIFT, 22 },
	{ -1, YYAT_ERROR, 0 },
	{ 103, YYAT_SHIFT, 23 },
	{ 12, YYAT_SHIFT, 6 },
	{ 12, YYAT_SHIFT, 7 },
	{ 12, YYAT_SHIFT, 8 },
	{ 12, YYAT_SHIFT, 9 },
	{ 12, YYAT_SHIFT, 10 },
	{ 12, YYAT_SHIFT, 11 },
	{ 12, YYAT_SHIFT, 12 },
	{ -1, YYAT_ERROR, 0 },
	{ 12, YYAT_SHIFT, 13 },
	{ 12, YYAT_SHIFT, 14 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 12, YYAT_SHIFT, 15 },
	{ 12, YYAT_SHIFT, 16 },
	{ 12, YYAT_SHIFT, 17 },
	{ 5, YYAT_SHIFT, 6 },
	{ 5, YYAT_SHIFT, 7 },
	{ 5, YYAT_SHIFT, 8 },
	{ 5, YYAT_SHIFT, 9 },
	{ 5, YYAT_SHIFT, 10 },
	{ 5, YYAT_SHIFT, 11 },
	{ 5, YYAT_SHIFT, 12 },
	{ -1, YYAT_ERROR, 0 },
	{ 5, YYAT_SHIFT, 13 },
	{ 5, YYAT_SHIFT, 14 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 5, YYAT_SHIFT, 15 },
	{ 5, YYAT_SHIFT, 16 },
	{ 5, YYAT_SHIFT, 17 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 12, YYAT_SHIFT, 18 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 12, YYAT_SHIFT, 19 },
	{ 12, YYAT_SHIFT, 20 },
	{ 12, YYAT_SHIFT, 21 },
	{ 12, YYAT_SHIFT, 22 },
	{ -1, YYAT_ERROR, 0 },
	{ 12, YYAT_SHIFT, 23 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 5, YYAT_SHIFT, 18 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 5, YYAT_SHIFT, 19 },
	{ 5, YYAT_SHIFT, 20 },
	{ 5, YYAT_SHIFT, 21 },
	{ 5, YYAT_SHIFT, 22 },
	{ -1, YYAT_ERROR, 0 },
	{ 5, YYAT_SHIFT, 23 },
	{ 84, YYAT_SHIFT, 54 },
	{ 84, YYAT_SHIFT, 55 },
	{ 84, YYAT_SHIFT, 56 },
	{ 84, YYAT_SHIFT, 57 },
	{ 84, YYAT_SHIFT, 58 },
	{ 84, YYAT_SHIFT, 59 },
	{ 84, YYAT_SHIFT, 60 },
	{ 84, YYAT_SHIFT, 61 },
	{ 84, YYAT_SHIFT, 62 },
	{ 84, YYAT_SHIFT, 63 },
	{ 84, YYAT_SHIFT, 64 },
	{ 84, YYAT_SHIFT, 65 },
	{ 84, YYAT_SHIFT, 66 },
	{ 84, YYAT_SHIFT, 67 },
	{ 84, YYAT_SHIFT, 68 },
	{ 84, YYAT_SHIFT, 69 },
	{ 84, YYAT_SHIFT, 70 },
	{ -1, YYAT_ERROR, 0 },
	{ 84, YYAT_SHIFT, 71 },
	{ 84, YYAT_SHIFT, 72 },
	{ 85, YYAT_SHIFT, 55 },
	{ 85, YYAT_SHIFT, 56 },
	{ 85, YYAT_SHIFT, 57 },
	{ 85, YYAT_SHIFT, 58 },
	{ 85, YYAT_SHIFT, 59 },
	{ 85, YYAT_SHIFT, 60 },
	{ 85, YYAT_SHIFT, 61 },
	{ 85, YYAT_SHIFT, 62 },
	{ 85, YYAT_SHIFT, 63 },
	{ 85, YYAT_SHIFT, 64 },
	{ 85, YYAT_SHIFT, 65 },
	{ 85, YYAT_SHIFT, 66 },
	{ 85, YYAT_SHIFT, 67 },
	{ 85, YYAT_SHIFT, 68 },
	{ 85, YYAT_SHIFT, 69 },
	{ 85, YYAT_SHIFT, 70 },
	{ -1, YYAT_ERROR, 0 },
	{ 85, YYAT_SHIFT, 71 },
	{ 85, YYAT_SHIFT, 72 },
	{ 86, YYAT_SHIFT, 56 },
	{ 86, YYAT_SHIFT, 57 },
	{ 86, YYAT_SHIFT, 58 },
	{ 86, YYAT_SHIFT, 59 },
	{ 86, YYAT_SHIFT, 60 },
	{ 86, YYAT_SHIFT, 61 },
	{ 86, YYAT_SHIFT, 62 },
	{ 86, YYAT_SHIFT, 63 },
	{ 86, YYAT_SHIFT, 64 },
	{ 86, YYAT_SHIFT, 65 },
	{ 86, YYAT_SHIFT, 66 },
	{ 86, YYAT_SHIFT, 67 },
	{ 86, YYAT_SHIFT, 68 },
	{ 86, YYAT_SHIFT, 69 },
	{ 86, YYAT_SHIFT, 70 },
	{ -1, YYAT_ERROR, 0 },
	{ 86, YYAT_SHIFT, 71 },
	{ 86, YYAT_SHIFT, 72 },
	{ 87, YYAT_SHIFT, 57 },
	{ 87, YYAT_SHIFT, 58 },
	{ 87, YYAT_SHIFT, 59 },
	{ 87, YYAT_SHIFT, 60 },
	{ 87, YYAT_SHIFT, 61 },
	{ 87, YYAT_SHIFT, 62 },
	{ 87, YYAT_SHIFT, 63 },
	{ 87, YYAT_SHIFT, 64 },
	{ 87, YYAT_SHIFT, 65 },
	{ 87, YYAT_SHIFT, 66 },
	{ 87, YYAT_SHIFT, 67 },
	{ 87, YYAT_SHIFT, 68 },
	{ 87, YYAT_SHIFT, 69 },
	{ 87, YYAT_SHIFT, 70 },
	{ -1, YYAT_ERROR, 0 },
	{ 87, YYAT_SHIFT, 71 },
	{ 87, YYAT_SHIFT, 72 },
	{ 88, YYAT_SHIFT, 58 },
	{ 88, YYAT_SHIFT, 59 },
	{ 88, YYAT_SHIFT, 60 },
	{ 88, YYAT_SHIFT, 61 },
	{ 88, YYAT_SHIFT, 62 },
	{ 88, YYAT_SHIFT, 63 },
	{ 88, YYAT_SHIFT, 64 },
	{ 88, YYAT_SHIFT, 65 },
	{ 88, YYAT_SHIFT, 66 },
	{ 88, YYAT_SHIFT, 67 },
	{ 88, YYAT_SHIFT, 68 },
	{ 88, YYAT_SHIFT, 69 },
	{ 88, YYAT_SHIFT, 70 },
	{ -1, YYAT_ERROR, 0 },
	{ 88, YYAT_SHIFT, 71 },
	{ 88, YYAT_SHIFT, 72 },
	{ 90, YYAT_SHIFT, 60 },
	{ 90, YYAT_SHIFT, 61 },
	{ 90, YYAT_SHIFT, 62 },
	{ 90, YYAT_SHIFT, 63 },
	{ 90, YYAT_SHIFT, 64 },
	{ 90, YYAT_SHIFT, 65 },
	{ 90, YYAT_SHIFT, 66 },
	{ 90, YYAT_SHIFT, 67 },
	{ 90, YYAT_SHIFT, 68 },
	{ 90, YYAT_SHIFT, 69 },
	{ 90, YYAT_SHIFT, 70 },
	{ -1, YYAT_ERROR, 0 },
	{ 90, YYAT_SHIFT, 71 },
	{ 90, YYAT_SHIFT, 72 },
	{ 89, YYAT_SHIFT, 60 },
	{ 89, YYAT_SHIFT, 61 },
	{ 89, YYAT_SHIFT, 62 },
	{ 89, YYAT_SHIFT, 63 },
	{ 89, YYAT_SHIFT, 64 },
	{ 89, YYAT_SHIFT, 65 },
	{ 89, YYAT_SHIFT, 66 },
	{ 89, YYAT_SHIFT, 67 },
	{ 89, YYAT_SHIFT, 68 },
	{ 89, YYAT_SHIFT, 69 },
	{ 89, YYAT_SHIFT, 70 },
	{ -1, YYAT_ERROR, 0 },
	{ 89, YYAT_SHIFT, 71 },
	{ 89, YYAT_SHIFT, 72 },
	{ 116, YYAT_SHIFT, 42 },
	{ 116, YYAT_SHIFT, 7 },
	{ 116, YYAT_SHIFT, 8 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 105, YYAT_SHIFT, 42 },
	{ 105, YYAT_SHIFT, 7 },
	{ 105, YYAT_SHIFT, 8 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 116, YYAT_SHIFT, 15 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 102, YYAT_SHIFT, 42 },
	{ 102, YYAT_SHIFT, 7 },
	{ 102, YYAT_SHIFT, 8 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 105, YYAT_SHIFT, 15 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 70, YYAT_SHIFT, 42 },
	{ 70, YYAT_SHIFT, 7 },
	{ 70, YYAT_SHIFT, 8 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 102, YYAT_SHIFT, 15 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 69, YYAT_SHIFT, 42 },
	{ 69, YYAT_SHIFT, 7 },
	{ 69, YYAT_SHIFT, 8 },
	{ 116, YYAT_SHIFT, 18 },
	{ -1, YYAT_ERROR, 0 },
	{ 70, YYAT_SHIFT, 15 },
	{ -1, YYAT_ERROR, 0 },
	{ 116, YYAT_SHIFT, 19 },
	{ 116, YYAT_SHIFT, 20 },
	{ 116, YYAT_SHIFT, 21 },
	{ 116, YYAT_SHIFT, 22 },
	{ 105, YYAT_SHIFT, 18 },
	{ 116, YYAT_SHIFT, 23 },
	{ 69, YYAT_SHIFT, 15 },
	{ -1, YYAT_ERROR, 0 },
	{ 105, YYAT_SHIFT, 19 },
	{ 105, YYAT_SHIFT, 20 },
	{ 105, YYAT_SHIFT, 21 },
	{ 105, YYAT_SHIFT, 22 },
	{ 102, YYAT_SHIFT, 18 },
	{ 105, YYAT_SHIFT, 23 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 102, YYAT_SHIFT, 19 },
	{ 102, YYAT_SHIFT, 20 },
	{ 102, YYAT_SHIFT, 21 },
	{ 102, YYAT_SHIFT, 22 },
	{ 70, YYAT_SHIFT, 18 },
	{ 102, YYAT_SHIFT, 23 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 70, YYAT_SHIFT, 19 },
	{ 70, YYAT_SHIFT, 20 },
	{ 70, YYAT_SHIFT, 21 },
	{ 70, YYAT_SHIFT, 22 },
	{ 69, YYAT_SHIFT, 18 },
	{ 70, YYAT_SHIFT, 23 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 69, YYAT_SHIFT, 19 },
	{ 69, YYAT_SHIFT, 20 },
	{ 69, YYAT_SHIFT, 21 },
	{ 69, YYAT_SHIFT, 22 },
	{ -1, YYAT_ERROR, 0 },
	{ 69, YYAT_SHIFT, 23 },
	{ 68, YYAT_SHIFT, 42 },
	{ 68, YYAT_SHIFT, 7 },
	{ 68, YYAT_SHIFT, 8 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 67, YYAT_SHIFT, 42 },
	{ 67, YYAT_SHIFT, 7 },
	{ 67, YYAT_SHIFT, 8 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 68, YYAT_SHIFT, 15 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 66, YYAT_SHIFT, 42 },
	{ 66, YYAT_SHIFT, 7 },
	{ 66, YYAT_SHIFT, 8 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 67, YYAT_SHIFT, 15 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 65, YYAT_SHIFT, 42 },
	{ 65, YYAT_SHIFT, 7 },
	{ 65, YYAT_SHIFT, 8 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 66, YYAT_SHIFT, 15 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 64, YYAT_SHIFT, 42 },
	{ 64, YYAT_SHIFT, 7 },
	{ 64, YYAT_SHIFT, 8 },
	{ 68, YYAT_SHIFT, 18 },
	{ -1, YYAT_ERROR, 0 },
	{ 65, YYAT_SHIFT, 15 },
	{ -1, YYAT_ERROR, 0 },
	{ 68, YYAT_SHIFT, 19 },
	{ 68, YYAT_SHIFT, 20 },
	{ 68, YYAT_SHIFT, 21 },
	{ 68, YYAT_SHIFT, 22 },
	{ 67, YYAT_SHIFT, 18 },
	{ 68, YYAT_SHIFT, 23 },
	{ 64, YYAT_SHIFT, 15 },
	{ -1, YYAT_ERROR, 0 },
	{ 67, YYAT_SHIFT, 19 },
	{ 67, YYAT_SHIFT, 20 },
	{ 67, YYAT_SHIFT, 21 },
	{ 67, YYAT_SHIFT, 22 },
	{ 66, YYAT_SHIFT, 18 },
	{ 67, YYAT_SHIFT, 23 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 66, YYAT_SHIFT, 19 },
	{ 66, YYAT_SHIFT, 20 },
	{ 66, YYAT_SHIFT, 21 },
	{ 66, YYAT_SHIFT, 22 },
	{ 65, YYAT_SHIFT, 18 },
	{ 66, YYAT_SHIFT, 23 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 65, YYAT_SHIFT, 19 },
	{ 65, YYAT_SHIFT, 20 },
	{ 65, YYAT_SHIFT, 21 },
	{ 65, YYAT_SHIFT, 22 },
	{ 64, YYAT_SHIFT, 18 },
	{ 65, YYAT_SHIFT, 23 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 64, YYAT_SHIFT, 19 },
	{ 64, YYAT_SHIFT, 20 },
	{ 64, YYAT_SHIFT, 21 },
	{ 64, YYAT_SHIFT, 22 },
	{ -1, YYAT_ERROR, 0 },
	{ 64, YYAT_SHIFT, 23 },
	{ 63, YYAT_SHIFT, 42 },
	{ 63, YYAT_SHIFT, 7 },
	{ 63, YYAT_SHIFT, 8 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 62, YYAT_SHIFT, 42 },
	{ 62, YYAT_SHIFT, 7 },
	{ 62, YYAT_SHIFT, 8 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 63, YYAT_SHIFT, 15 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 61, YYAT_SHIFT, 42 },
	{ 61, YYAT_SHIFT, 7 },
	{ 61, YYAT_SHIFT, 8 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 62, YYAT_SHIFT, 15 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 60, YYAT_SHIFT, 42 },
	{ 60, YYAT_SHIFT, 7 },
	{ 60, YYAT_SHIFT, 8 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 61, YYAT_SHIFT, 15 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 59, YYAT_SHIFT, 42 },
	{ 59, YYAT_SHIFT, 7 },
	{ 59, YYAT_SHIFT, 8 },
	{ 63, YYAT_SHIFT, 18 },
	{ -1, YYAT_ERROR, 0 },
	{ 60, YYAT_SHIFT, 15 },
	{ -1, YYAT_ERROR, 0 },
	{ 63, YYAT_SHIFT, 19 },
	{ 63, YYAT_SHIFT, 20 },
	{ 63, YYAT_SHIFT, 21 },
	{ 63, YYAT_SHIFT, 22 },
	{ 62, YYAT_SHIFT, 18 },
	{ 63, YYAT_SHIFT, 23 },
	{ 59, YYAT_SHIFT, 15 },
	{ -1, YYAT_ERROR, 0 },
	{ 62, YYAT_SHIFT, 19 },
	{ 62, YYAT_SHIFT, 20 },
	{ 62, YYAT_SHIFT, 21 },
	{ 62, YYAT_SHIFT, 22 },
	{ 61, YYAT_SHIFT, 18 },
	{ 62, YYAT_SHIFT, 23 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 61, YYAT_SHIFT, 19 },
	{ 61, YYAT_SHIFT, 20 },
	{ 61, YYAT_SHIFT, 21 },
	{ 61, YYAT_SHIFT, 22 },
	{ 60, YYAT_SHIFT, 18 },
	{ 61, YYAT_SHIFT, 23 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 60, YYAT_SHIFT, 19 },
	{ 60, YYAT_SHIFT, 20 },
	{ 60, YYAT_SHIFT, 21 },
	{ 60, YYAT_SHIFT, 22 },
	{ 59, YYAT_SHIFT, 18 },
	{ 60, YYAT_SHIFT, 23 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 59, YYAT_SHIFT, 19 },
	{ 59, YYAT_SHIFT, 20 },
	{ 59, YYAT_SHIFT, 21 },
	{ 59, YYAT_SHIFT, 22 },
	{ -1, YYAT_ERROR, 0 },
	{ 59, YYAT_SHIFT, 23 },
	{ 58, YYAT_SHIFT, 42 },
	{ 58, YYAT_SHIFT, 7 },
	{ 58, YYAT_SHIFT, 8 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 57, YYAT_SHIFT, 42 },
	{ 57, YYAT_SHIFT, 7 },
	{ 57, YYAT_SHIFT, 8 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 58, YYAT_SHIFT, 15 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 56, YYAT_SHIFT, 42 },
	{ 56, YYAT_SHIFT, 7 },
	{ 56, YYAT_SHIFT, 8 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 57, YYAT_SHIFT, 15 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 55, YYAT_SHIFT, 42 },
	{ 55, YYAT_SHIFT, 7 },
	{ 55, YYAT_SHIFT, 8 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 56, YYAT_SHIFT, 15 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 54, YYAT_SHIFT, 42 },
	{ 54, YYAT_SHIFT, 7 },
	{ 54, YYAT_SHIFT, 8 },
	{ 58, YYAT_SHIFT, 18 },
	{ -1, YYAT_ERROR, 0 },
	{ 55, YYAT_SHIFT, 15 },
	{ -1, YYAT_ERROR, 0 },
	{ 58, YYAT_SHIFT, 19 },
	{ 58, YYAT_SHIFT, 20 },
	{ 58, YYAT_SHIFT, 21 },
	{ 58, YYAT_SHIFT, 22 },
	{ 57, YYAT_SHIFT, 18 },
	{ 58, YYAT_SHIFT, 23 },
	{ 54, YYAT_SHIFT, 15 },
	{ -1, YYAT_ERROR, 0 },
	{ 57, YYAT_SHIFT, 19 },
	{ 57, YYAT_SHIFT, 20 },
	{ 57, YYAT_SHIFT, 21 },
	{ 57, YYAT_SHIFT, 22 },
	{ 56, YYAT_SHIFT, 18 },
	{ 57, YYAT_SHIFT, 23 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 56, YYAT_SHIFT, 19 },
	{ 56, YYAT_SHIFT, 20 },
	{ 56, YYAT_SHIFT, 21 },
	{ 56, YYAT_SHIFT, 22 },
	{ 55, YYAT_SHIFT, 18 },
	{ 56, YYAT_SHIFT, 23 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 55, YYAT_SHIFT, 19 },
	{ 55, YYAT_SHIFT, 20 },
	{ 55, YYAT_SHIFT, 21 },
	{ 55, YYAT_SHIFT, 22 },
	{ 54, YYAT_SHIFT, 18 },
	{ 55, YYAT_SHIFT, 23 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 54, YYAT_SHIFT, 19 },
	{ 54, YYAT_SHIFT, 20 },
	{ 54, YYAT_SHIFT, 21 },
	{ 54, YYAT_SHIFT, 22 },
	{ -1, YYAT_ERROR, 0 },
	{ 54, YYAT_SHIFT, 23 },
	{ 53, YYAT_SHIFT, 42 },
	{ 53, YYAT_SHIFT, 7 },
	{ 53, YYAT_SHIFT, 8 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 52, YYAT_SHIFT, 42 },
	{ 52, YYAT_SHIFT, 7 },
	{ 52, YYAT_SHIFT, 8 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 53, YYAT_SHIFT, 15 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 41, YYAT_SHIFT, 42 },
	{ 41, YYAT_SHIFT, 7 },
	{ 41, YYAT_SHIFT, 8 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 52, YYAT_SHIFT, 15 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 40, YYAT_SHIFT, 42 },
	{ 40, YYAT_SHIFT, 7 },
	{ 40, YYAT_SHIFT, 8 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 41, YYAT_SHIFT, 15 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 35, YYAT_SHIFT, 42 },
	{ 35, YYAT_SHIFT, 7 },
	{ 35, YYAT_SHIFT, 8 },
	{ 53, YYAT_SHIFT, 18 },
	{ -1, YYAT_ERROR, 0 },
	{ 40, YYAT_SHIFT, 15 },
	{ -1, YYAT_ERROR, 0 },
	{ 53, YYAT_SHIFT, 19 },
	{ 53, YYAT_SHIFT, 20 },
	{ 53, YYAT_SHIFT, 21 },
	{ 53, YYAT_SHIFT, 22 },
	{ 52, YYAT_SHIFT, 18 },
	{ 53, YYAT_SHIFT, 23 },
	{ 35, YYAT_SHIFT, 15 },
	{ -1, YYAT_ERROR, 0 },
	{ 52, YYAT_SHIFT, 19 },
	{ 52, YYAT_SHIFT, 20 },
	{ 52, YYAT_SHIFT, 21 },
	{ 52, YYAT_SHIFT, 22 },
	{ 41, YYAT_SHIFT, 18 },
	{ 52, YYAT_SHIFT, 23 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 41, YYAT_SHIFT, 19 },
	{ 41, YYAT_SHIFT, 20 },
	{ 41, YYAT_SHIFT, 21 },
	{ 41, YYAT_SHIFT, 22 },
	{ 40, YYAT_SHIFT, 18 },
	{ 41, YYAT_SHIFT, 23 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 40, YYAT_SHIFT, 19 },
	{ 40, YYAT_SHIFT, 20 },
	{ 40, YYAT_SHIFT, 21 },
	{ 40, YYAT_SHIFT, 22 },
	{ 35, YYAT_SHIFT, 18 },
	{ 40, YYAT_SHIFT, 23 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 35, YYAT_SHIFT, 19 },
	{ 35, YYAT_SHIFT, 20 },
	{ 35, YYAT_SHIFT, 21 },
	{ 35, YYAT_SHIFT, 22 },
	{ -1, YYAT_ERROR, 0 },
	{ 35, YYAT_SHIFT, 23 },
	{ 34, YYAT_SHIFT, 42 },
	{ 34, YYAT_SHIFT, 7 },
	{ 34, YYAT_SHIFT, 8 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 33, YYAT_SHIFT, 42 },
	{ 33, YYAT_SHIFT, 7 },
	{ 33, YYAT_SHIFT, 8 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 34, YYAT_SHIFT, 15 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 23, YYAT_SHIFT, 42 },
	{ 23, YYAT_SHIFT, 7 },
	{ 23, YYAT_SHIFT, 8 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 33, YYAT_SHIFT, 15 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 22, YYAT_SHIFT, 42 },
	{ 22, YYAT_SHIFT, 7 },
	{ 22, YYAT_SHIFT, 8 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 23, YYAT_SHIFT, 15 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 21, YYAT_SHIFT, 42 },
	{ 21, YYAT_SHIFT, 7 },
	{ 21, YYAT_SHIFT, 8 },
	{ 34, YYAT_SHIFT, 18 },
	{ -1, YYAT_ERROR, 0 },
	{ 22, YYAT_SHIFT, 15 },
	{ -1, YYAT_ERROR, 0 },
	{ 34, YYAT_SHIFT, 19 },
	{ 34, YYAT_SHIFT, 20 },
	{ 34, YYAT_SHIFT, 21 },
	{ 34, YYAT_SHIFT, 22 },
	{ 33, YYAT_SHIFT, 18 },
	{ 34, YYAT_SHIFT, 23 },
	{ 21, YYAT_SHIFT, 15 },
	{ -1, YYAT_ERROR, 0 },
	{ 33, YYAT_SHIFT, 19 },
	{ 33, YYAT_SHIFT, 20 },
	{ 33, YYAT_SHIFT, 21 },
	{ 33, YYAT_SHIFT, 22 },
	{ 23, YYAT_SHIFT, 18 },
	{ 33, YYAT_SHIFT, 23 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 23, YYAT_SHIFT, 19 },
	{ 23, YYAT_SHIFT, 20 },
	{ 23, YYAT_SHIFT, 21 },
	{ 23, YYAT_SHIFT, 22 },
	{ 22, YYAT_SHIFT, 18 },
	{ 23, YYAT_SHIFT, 23 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 22, YYAT_SHIFT, 19 },
	{ 22, YYAT_SHIFT, 20 },
	{ 22, YYAT_SHIFT, 21 },
	{ 22, YYAT_SHIFT, 22 },
	{ 21, YYAT_SHIFT, 18 },
	{ 22, YYAT_SHIFT, 23 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 21, YYAT_SHIFT, 19 },
	{ 21, YYAT_SHIFT, 20 },
	{ 21, YYAT_SHIFT, 21 },
	{ 21, YYAT_SHIFT, 22 },
	{ -1, YYAT_ERROR, 0 },
	{ 21, YYAT_SHIFT, 23 },
	{ 20, YYAT_SHIFT, 42 },
	{ 20, YYAT_SHIFT, 7 },
	{ 20, YYAT_SHIFT, 8 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 19, YYAT_SHIFT, 42 },
	{ 19, YYAT_SHIFT, 7 },
	{ 19, YYAT_SHIFT, 8 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 20, YYAT_SHIFT, 15 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 18, YYAT_SHIFT, 42 },
	{ 18, YYAT_SHIFT, 7 },
	{ 18, YYAT_SHIFT, 8 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 19, YYAT_SHIFT, 15 },
	{ 94, YYAT_SHIFT, 64 },
	{ 94, YYAT_SHIFT, 65 },
	{ 94, YYAT_SHIFT, 66 },
	{ 94, YYAT_SHIFT, 67 },
	{ 94, YYAT_SHIFT, 68 },
	{ 94, YYAT_SHIFT, 69 },
	{ 94, YYAT_SHIFT, 70 },
	{ 18, YYAT_SHIFT, 15 },
	{ 94, YYAT_SHIFT, 71 },
	{ 94, YYAT_SHIFT, 72 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 20, YYAT_SHIFT, 18 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 20, YYAT_SHIFT, 19 },
	{ 20, YYAT_SHIFT, 20 },
	{ 20, YYAT_SHIFT, 21 },
	{ 20, YYAT_SHIFT, 22 },
	{ 19, YYAT_SHIFT, 18 },
	{ 20, YYAT_SHIFT, 23 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 19, YYAT_SHIFT, 19 },
	{ 19, YYAT_SHIFT, 20 },
	{ 19, YYAT_SHIFT, 21 },
	{ 19, YYAT_SHIFT, 22 },
	{ 18, YYAT_SHIFT, 18 },
	{ 19, YYAT_SHIFT, 23 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 18, YYAT_SHIFT, 19 },
	{ 18, YYAT_SHIFT, 20 },
	{ 18, YYAT_SHIFT, 21 },
	{ 18, YYAT_SHIFT, 22 },
	{ -1, YYAT_ERROR, 0 },
	{ 18, YYAT_SHIFT, 23 },
	{ 93, YYAT_SHIFT, 64 },
	{ 93, YYAT_SHIFT, 65 },
	{ 93, YYAT_SHIFT, 66 },
	{ 93, YYAT_SHIFT, 67 },
	{ 93, YYAT_SHIFT, 68 },
	{ 93, YYAT_SHIFT, 69 },
	{ 93, YYAT_SHIFT, 70 },
	{ -1, YYAT_ERROR, 0 },
	{ 93, YYAT_SHIFT, 71 },
	{ 93, YYAT_SHIFT, 72 },
	{ 92, YYAT_SHIFT, 64 },
	{ 92, YYAT_SHIFT, 65 },
	{ 92, YYAT_SHIFT, 66 },
	{ 92, YYAT_SHIFT, 67 },
	{ 92, YYAT_SHIFT, 68 },
	{ 92, YYAT_SHIFT, 69 },
	{ 92, YYAT_SHIFT, 70 },
	{ -1, YYAT_ERROR, 0 },
	{ 92, YYAT_SHIFT, 71 },
	{ 92, YYAT_SHIFT, 72 },
	{ 91, YYAT_SHIFT, 64 },
	{ 91, YYAT_SHIFT, 65 },
	{ 91, YYAT_SHIFT, 66 },
	{ 91, YYAT_SHIFT, 67 },
	{ 91, YYAT_SHIFT, 68 },
	{ 91, YYAT_SHIFT, 69 },
	{ 91, YYAT_SHIFT, 70 },
	{ -1, YYAT_ERROR, 0 },
	{ 91, YYAT_SHIFT, 71 },
	{ 91, YYAT_SHIFT, 72 }
};

YYCONST yystateaction_t YYNEARFAR YYBASED_CODE YYDCDECL yystateaction[] = {
	{ -53, 1, YYAT_ERROR, 0 },
	{ -96, 1, YYAT_ERROR, 0 },
	{ 203, 1, YYAT_ERROR, 0 },
	{ -99, 1, YYAT_ERROR, 0 },
	{ -63, 1, YYAT_ERROR, 0 },
	{ 13, 1, YYAT_REDUCE, 11 },
	{ 0, 0, YYAT_REDUCE, 12 },
	{ 0, 0, YYAT_REDUCE, 49 },
	{ 0, 0, YYAT_REDUCE, 51 },
	{ -110, 1, YYAT_ERROR, 0 },
	{ -115, 1, YYAT_ERROR, 0 },
	{ -124, 1, YYAT_ERROR, 0 },
	{ -3, 1, YYAT_REDUCE, 11 },
	{ 0, 0, YYAT_REDUCE, 9 },
	{ -83, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 50 },
	{ -131, 1, YYAT_ERROR, 0 },
	{ -141, 1, YYAT_ERROR, 0 },
	{ 654, 1, YYAT_REDUCE, 57 },
	{ 646, 1, YYAT_REDUCE, 57 },
	{ 638, 1, YYAT_REDUCE, 57 },
	{ 593, 1, YYAT_REDUCE, 57 },
	{ 585, 1, YYAT_REDUCE, 57 },
	{ 577, 1, YYAT_REDUCE, 57 },
	{ 0, 0, YYAT_REDUCE, 6 },
	{ 0, 0, YYAT_REDUCE, 5 },
	{ -170, 1, YYAT_REDUCE, 11 },
	{ 0, 0, YYAT_REDUCE, 3 },
	{ 0, 0, YYAT_REDUCE, 4 },
	{ 0, 0, YYAT_REDUCE, 8 },
	{ -106, 1, YYAT_DEFAULT, 110 },
	{ 0, 0, YYAT_REDUCE, 13 },
	{ 0, 0, YYAT_REDUCE, 14 },
	{ 569, 1, YYAT_REDUCE, 57 },
	{ 561, 1, YYAT_REDUCE, 57 },
	{ 516, 1, YYAT_REDUCE, 57 },
	{ -186, 1, YYAT_REDUCE, 11 },
	{ -119, 1, YYAT_REDUCE, 20 },
	{ -242, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 21 },
	{ 508, 1, YYAT_REDUCE, 57 },
	{ 500, 1, YYAT_REDUCE, 57 },
	{ 0, 0, YYAT_REDUCE, 59 },
	{ 0, 0, YYAT_REDUCE, 47 },
	{ 0, 0, YYAT_REDUCE, 34 },
	{ 0, 0, YYAT_REDUCE, 37 },
	{ 0, 0, YYAT_REDUCE, 39 },
	{ 0, 0, YYAT_REDUCE, 35 },
	{ -147, 1, YYAT_DEFAULT, 118 },
	{ 0, 0, YYAT_REDUCE, 1 },
	{ 0, 0, YYAT_REDUCE, 2 },
	{ 0, 0, YYAT_REDUCE, 10 },
	{ 492, 1, YYAT_REDUCE, 57 },
	{ 484, 1, YYAT_REDUCE, 57 },
	{ 439, 1, YYAT_REDUCE, 57 },
	{ 431, 1, YYAT_REDUCE, 57 },
	{ 423, 1, YYAT_REDUCE, 57 },
	{ 415, 1, YYAT_REDUCE, 57 },
	{ 407, 1, YYAT_REDUCE, 57 },
	{ 362, 1, YYAT_REDUCE, 57 },
	{ 354, 1, YYAT_REDUCE, 57 },
	{ 346, 1, YYAT_REDUCE, 57 },
	{ 338, 1, YYAT_REDUCE, 57 },
	{ 330, 1, YYAT_REDUCE, 57 },
	{ 285, 1, YYAT_REDUCE, 57 },
	{ 277, 1, YYAT_REDUCE, 57 },
	{ 269, 1, YYAT_REDUCE, 57 },
	{ 261, 1, YYAT_REDUCE, 57 },
	{ 253, 1, YYAT_REDUCE, 57 },
	{ 208, 1, YYAT_REDUCE, 57 },
	{ 200, 1, YYAT_REDUCE, 57 },
	{ 0, 0, YYAT_REDUCE, 38 },
	{ 0, 0, YYAT_REDUCE, 40 },
	{ -121, 1, YYAT_DEFAULT, 110 },
	{ -163, 1, YYAT_DEFAULT, 118 },
	{ -172, 1, YYAT_DEFAULT, 118 },
	{ 0, 0, YYAT_REDUCE, 7 },
	{ -152, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 17 },
	{ -142, 1, YYAT_ERROR, 0 },
	{ -188, 1, YYAT_DEFAULT, 118 },
	{ -193, 1, YYAT_DEFAULT, 118 },
	{ 0, 0, YYAT_REDUCE, 48 },
	{ -228, 1, YYAT_REDUCE, 58 },
	{ 36, 1, YYAT_REDUCE, 53 },
	{ 55, 1, YYAT_REDUCE, 52 },
	{ 73, 1, YYAT_REDUCE, 33 },
	{ 90, 1, YYAT_REDUCE, 56 },
	{ 106, 1, YYAT_REDUCE, 32 },
	{ 134, 1, YYAT_REDUCE, 28 },
	{ 120, 1, YYAT_REDUCE, 29 },
	{ 687, 1, YYAT_REDUCE, 41 },
	{ 677, 1, YYAT_REDUCE, 42 },
	{ 667, 1, YYAT_REDUCE, 30 },
	{ 628, 1, YYAT_REDUCE, 31 },
	{ -113, 1, YYAT_REDUCE, 54 },
	{ -174, 1, YYAT_REDUCE, 55 },
	{ -129, 1, YYAT_REDUCE, 43 },
	{ -190, 1, YYAT_REDUCE, 44 },
	{ -155, 1, YYAT_REDUCE, 45 },
	{ -200, 1, YYAT_REDUCE, 46 },
	{ -216, 1, YYAT_REDUCE, 36 },
	{ 192, 1, YYAT_REDUCE, 57 },
	{ -48, 1, YYAT_REDUCE, 11 },
	{ -64, 1, YYAT_REDUCE, 11 },
	{ 184, 1, YYAT_REDUCE, 57 },
	{ -178, 1, YYAT_REDUCE, 18 },
	{ 0, 0, YYAT_REDUCE, 19 },
	{ -197, 1, YYAT_ERROR, 0 },
	{ -241, 1, YYAT_ERROR, 0 },
	{ -219, 1, YYAT_DEFAULT, 118 },
	{ 0, 0, YYAT_REDUCE, 27 },
	{ -248, 1, YYAT_REDUCE, 24 },
	{ -250, 1, YYAT_REDUCE, 23 },
	{ 0, 0, YYAT_REDUCE, 15 },
	{ 0, 0, YYAT_REDUCE, 16 },
	{ 176, 1, YYAT_REDUCE, 57 },
	{ -109, 1, YYAT_REDUCE, 11 },
	{ -276, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 25 },
	{ -125, 1, YYAT_REDUCE, 11 },
	{ 0, 0, YYAT_REDUCE, 26 }
};

int YYNEAR YYDCDECL yynontermgoto_size = 53;

YYCONST yynontermgoto_t YYNEARFAR YYBASED_CODE YYDCDECL yynontermgoto[] = {
	{ 120, 121 },
	{ 120, 31 },
	{ 120, 32 },
	{ 120, 29 },
	{ 14, 38 },
	{ 14, 39 },
	{ 117, 119 },
	{ 120, 24 },
	{ 120, 28 },
	{ 120, 25 },
	{ 120, 30 },
	{ 12, 36 },
	{ 12, 27 },
	{ 116, 118 },
	{ 106, 77 },
	{ 105, 113 },
	{ 104, 112 },
	{ 103, 111 },
	{ 102, 110 },
	{ 79, 107 },
	{ 70, 101 },
	{ 69, 100 },
	{ 68, 99 },
	{ 67, 98 },
	{ 66, 97 },
	{ 65, 96 },
	{ 64, 95 },
	{ 63, 94 },
	{ 62, 93 },
	{ 61, 92 },
	{ 60, 91 },
	{ 59, 90 },
	{ 58, 89 },
	{ 57, 88 },
	{ 56, 87 },
	{ 55, 86 },
	{ 54, 85 },
	{ 53, 84 },
	{ 52, 83 },
	{ 41, 81 },
	{ 40, 80 },
	{ 36, 50 },
	{ 35, 75 },
	{ 34, 74 },
	{ 33, 73 },
	{ 23, 48 },
	{ 22, 47 },
	{ 21, 46 },
	{ 20, 45 },
	{ 19, 44 },
	{ 18, 43 },
	{ 5, 26 },
	{ 0, 2 }
};

YYCONST yystategoto_t YYNEARFAR YYBASED_CODE YYDCDECL yystategoto[] = {
	{ 51, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 49, 12 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 9, 120 },
	{ 0, -1 },
	{ -3, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 37, -1 },
	{ 36, -1 },
	{ 35, -1 },
	{ 34, -1 },
	{ 33, -1 },
	{ 32, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, 36 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 31, -1 },
	{ 30, -1 },
	{ 29, -1 },
	{ 38, 120 },
	{ 0, 106 },
	{ 0, -1 },
	{ 0, -1 },
	{ 27, -1 },
	{ 26, -1 },
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
	{ 25, -1 },
	{ 24, -1 },
	{ 23, -1 },
	{ 22, -1 },
	{ 21, -1 },
	{ 20, -1 },
	{ 19, -1 },
	{ 18, -1 },
	{ 17, -1 },
	{ 16, -1 },
	{ 15, -1 },
	{ 14, -1 },
	{ 13, -1 },
	{ 12, -1 },
	{ 11, -1 },
	{ 10, -1 },
	{ 9, -1 },
	{ 8, -1 },
	{ 7, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 11, -1 },
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
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 5, -1 },
	{ 14, 120 },
	{ 13, 120 },
	{ 2, -1 },
	{ 5, -1 },
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
	{ 3, 120 },
	{ 0, -1 },
	{ 0, -1 },
	{ -3, -1 },
	{ 0, -1 }
};

YYCONST yydestructor_t YYNEARFAR *YYNEAR YYDCDECL yydestructorptr = NULL;

YYCONST yytokendest_t YYNEARFAR *YYNEAR YYDCDECL yytokendestptr = NULL;
int YYNEAR YYDCDECL yytokendest_size = 0;

YYCONST yytokendestbase_t YYNEARFAR *YYNEAR YYDCDECL yytokendestbaseptr = NULL;
int YYNEAR YYDCDECL yytokendestbase_size = 0;
#line 342 ".\\_parser.y"


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
	//printTree(root);
	posTraverse(root, checkNode);
	preTraverse(root,0);
	printTree(root);
	printSymTab(symbol_table);
	printf("temp_var: %d\n",temp_var_seq);
	root->label->begin_label = newlabel();
	freopen("output.asm","w",stdout);
	gen_code(root);
	fclose(stdout);
	system("Pause");
	return 0;
}


