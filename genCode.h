#ifndef _GENCODE_H
#define _GENCODE_H

#include"_parser.h"
#include"TreeNode.h"
#include"SymTab.h"

void gen_code(TreeNode *root);//代码生成
void gen_head();//生成代码头部
void gen_StmtNode(TreeNode *node);
void gen_ExpNode(TreeNode *node);
void recur_gen_code(TreeNode *node);
void gen_decl();
void print_attr(TreeNode *node);
void printReOp(TreeNode *node, char *jmpOp);//用于生成关系运算符的汇编代码,LT是jmopOp为相反的JGE，以此类推

#endif