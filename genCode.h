#ifndef _GENCODE_H
#define _GENCODE_H

#include"_parser.h"
#include"TreeNode.h"
#include"SymTab.h"

void gen_code(TreeNode *root);//��������
void gen_head();//���ɴ���ͷ��
void gen_StmtNode(TreeNode *node);
void gen_ExpNode(TreeNode *node);
void recur_gen_code(TreeNode *node);
void gen_decl();
void print_attr(TreeNode *node);
void printReOp(TreeNode *node, char *jmpOp);//�������ɹ�ϵ������Ļ�����,LT��jmopOpΪ�෴��JGE���Դ�����

#endif