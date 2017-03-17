#include<stdio.h>
#include"TreeNode.h"
#include"SymTab.h"


/*void main(int argc, char** argv)
{
	char a = 'a';
}*/

void printReOp(TreeNode *node,char *jmpOp)
{

	printf("\tMOV eax,");
	print_attr(node->child[0]);
	printf("\n");
	printf("\tCMP eax,");
	print_attr(node->child[1]);
	printf("\n");
	if (node->type == Boolean)
	{
		printf("\tJGE @%d\n", node->label->false_label);
	}
	else
	{
		int tempLabel1 = newlabel();
		int tempLabel2 = newlabel();
		printf("\tJGE @%d\n",jmpOp, tempLabel1);
		printf("\tMOV t%d,1\n", node->temp_var);
		printf("\tJMP @%d\n", tempLabel2);
		printf("@%d:\n", tempLabel1);
		printf("\tMOV t%d,0\n", node->temp_var);
		printf("@%d:\n", tempLabel2);
	};
}