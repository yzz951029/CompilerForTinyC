#ifndef _TREENODE_H
#define _TREENODE_H
#define MAXCHILD 4

#include "_parser.h"
#define MAXBUFF 100

typedef enum{ IfK,WhileK,ForK,AssignK,DeclK,EmptyK,IfElseK,InputK,OutputK} StmtKind;
typedef enum{ OpK, ConstK, ConstCK,IdK, IdlistK, InitK }ExpKind;
typedef enum{ExpK,StmtK}NodeKind;
typedef enum{Void,Int,Boolean,Char}ExpType;	
typedef struct { int true_label; int false_label; int next_label; int begin_label; } Label;

typedef struct treeNode{
	struct treeNode *child[MAXCHILD];
	struct treeNode *sibling;
	int lineno;
	NodeKind nodeKind;
	union { StmtKind stmt; ExpKind exp;}kind;
	union{
		int op;
		int val;
		char *name;
		char charVal;
	}attr;
	Label *label;
	ExpType type;
	int temp_var;
} TreeNode;

TreeNode *newStmtNode(StmtKind kind);
TreeNode *newExpNode(ExpKind kind);

void printTree(TreeNode *root);
void printSpace();
void printOp(int op);
ExpType char2type(char *yytext);
char *copyString(char *s);
void checkNode(TreeNode **node);
void posTraverse(TreeNode *root, void(*func)(TreeNode **));//后序遍历语法树
int newlabel();
void printLabel(Label *label);
//void preTraverse(TreeNode *root, void(*func)(TreeNode **,Label));//先序遍历语法树
//void labelOn(TreeNode **,Label label);
int temp_var_seq = 0;
#endif