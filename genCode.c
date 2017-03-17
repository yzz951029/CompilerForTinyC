#include"genCode.h"
#include"TreeNode.h"
#include"_parser.h"
extern FILE *yyout;
extern int newlabel();
int startLabel;


#define IsTypeboolean \
do{\
if (node->type == Boolean)\
{\
	printf("\tCMP eax,0\n"); \
	printf("\tJE @%d\n", node->label->false_label); \
}\
else\
{\
	printf(\
	"\tMOV t%d, eax\n", node->temp_var); \
}\
} while (0);

void gen_decl()
{
	printf(".data\n");
	printf("\tcharInputStream db \'%%c\',0\n"
		"\tintInputStream db \'%%d\',0\n");
	printf("\tcharOutputStream db \'%%c\',13,10,0\n"
		"\tintOutputStream db \'%%d\',13,10,0\n");
	struct word *current = symbol_table;
	while (current)
	{
		printf( "\t\t_%s ", current->name);
		switch (current->type){
		case Int:
			printf( "DWORD 0\n");
			break;
		case Char:
			printf( "DWORD 0\n");
			break;
		default:
			break;
		}
		current = current->next;
	}
	for (int i = 0; i < temp_var_seq; i++)
	{
		printf( "\t\tt%d DWORD 0\n", i);
	}
	printf( "\t\tbuffer BYTE 128 dup(0)\n"
		"\t\tLF BYTE 13, 10, 0\n");
	printf(".code\n");
	startLabel = newlabel();
	printf("@%d:\n", startLabel);
}


void gen_code(TreeNode *root){
	gen_head();
	gen_decl();
	recur_gen_code(root);
	//printf("@0:\n");
	printf( "\tinvoke ExitProcess, 0\n");
	printf("\tend @%d\n", startLabel);
}

void gen_head(){
	printf("\t.586\n"
		"\t.model flat, stdcall\n"
		"\toption casemap :none\n\n"
		"\tinclude \\masm32\\include\\windows.inc\n"
		"\tinclude \\masm32\\include\\user32.inc\n"
		"\tinclude \\masm32\\include\\kernel32.inc\n"
		"\tinclude \\masm32\\include\\masm32.inc\n\n"
		"\tincludelib \\masm32\\lib\\user32.lib\n"
		"\tincludelib \\masm32\\lib\\kernel32.lib\n"
		"\tincludelib \\masm32\\lib\\masm32.lib\n"
		"\tinclude\\masm32\\include\\msvcrt.inc\n"
		"\tincludelib\\masm32\\lib\\msvcrt.lib\n");
}
void gen_StmtNode(TreeNode *node){
	if (!node)
		return;
	//TreeNode *e1 = node->child[0];
	//TreeNode *e2 = node->child[1];
	switch (node->kind.stmt){
	case WhileK:{
					printf( "@%d:\n", node->label->begin_label);
					recur_gen_code(node->child[0]);
					//printf("@%d:\n", node->child[0]->label->true_label);
					recur_gen_code(node->child[1]);
					printf( "\tJMP @%d\n", node->label->begin_label);
					printf("@%d:\n", node->label->next_label);//for,while,if需要nextlabel来指示下一个表达式在哪
					break;
				 
	}
	case ForK:{
				  recur_gen_code(node->child[0]);
				  printf("@%d:\n",node->label->begin_label);
				  recur_gen_code(node->child[1]);
				  recur_gen_code(node->child[3]);
				  recur_gen_code(node->child[2]);
				  printf("\tJMP @%d\n", node->label->begin_label);
				  printf("@%d:\n", node->child[1]->label->false_label);
				  break;
	}
	case IfElseK:{
					 recur_gen_code(node->child[0]);
					 //printf("@%d:\n", node->child[0]->label->true_label);
					 recur_gen_code(node->child[1]);
					 printf("\tJMP @%d\n",node->label->next_label);
					 printf("@%d:\n", node->child[0]->label->false_label);
					 recur_gen_code(node->child[2]);
					printf("@%d:\n", node->label->next_label);
					 break;
	}
	case IfK:{
				 recur_gen_code(node->child[0]);
				 printf("@%d:\n", node->child[0]->label->true_label);
				 recur_gen_code(node->child[1]);
				 printf("@%d:\n", node->label->next_label);
				 break;
	}
	case DeclK:{
				   recur_gen_code(node->child[0]);
				   break;
	}
	case OutputK:{
					 recur_gen_code(node->child[0]);
					 printf("\tINVOKE crt_printf,addr ");
					 if (node->child[0]->type == Int)
						 printf("intOutputStream,");
					 else
						 printf("intOutputStream,");
					 print_attr(node->child[0]);
					 printf("\n");
					 break;
	}
	case InputK:{
					printf("\tINVOKE crt_scanf,addr ");
					if (node->child[0]->type == Int)
						printf("intInputStream,");
					else
						printf("charInputStream,");
					printf("addr ");
					print_attr(node->child[0]);
					printf("\n");
					break;
	}
		break;
	}
	//if (node->sibling)
	//	printf("@%d:\n", node->label->next_label);
//	if ((node->sibling) && node->sibling->nodeKind == StmtK && (node->sibling->kind.stmt != WhileK && node->sibling->kind.stmt != ForK))
	
}
void print_attr(TreeNode *node){//打印node的attr
	if (node->kind.exp == IdK)
		printf("_%s", node->attr.name);
	else if (node->kind.exp == OpK)
		printf("t%d", node->temp_var);
	else if (node->kind.exp == ConstK)
		printf("%d", node->attr.val);
	else if (node->kind.exp == ConstCK)
		printf("%d", node->attr.charVal);

}

void gen_ExpNode(TreeNode *node){
	if (!node)
		return;
	recur_gen_code(node->child[0]);
	if (!(node->attr.op == AND || node->attr.op == OR))
		recur_gen_code(node->child[1]);
	switch (node->kind.exp){
	case OpK:
		switch (node->attr.op)
		{
		case SADD_F:
			printf("\tINC ");
			print_attr(node->child[0]);
			printf("\n");
			printf("\tMOV eax,");
			print_attr(node->child[0]);
			printf("\n");
			IsTypeboolean
			break;
		case SADD_B:
			printf("\tMOV eax,");
			print_attr(node->child[0]);
			printf("\n");
			printf("\tINC ");
			print_attr(node->child[0]);
			printf("\n");
			IsTypeboolean
				break;
		case SSUB_F:
			printf("\tDEC ");
			print_attr(node->child[0]);
			printf("\n");
			printf("\tMOV eax,");
			print_attr(node->child[0]);
			printf("\n");
			IsTypeboolean
				break;
		case SSUB_B:
			printf("\tMOV eax,");
			print_attr(node->child[0]);
			printf("\n");
			printf("\tDEC ");
			print_attr(node->child[0]);
			printf("\n");
			IsTypeboolean
				break;
		case ADD:
			printf("\tMOV eax,");
			print_attr(node->child[0]);
			printf("\n");
			printf("\tADD eax, ");
			print_attr(node->child[1]);
			printf("\n");
			/*if (node->type == Boolean)
			{
				printf("\tCMP eax,0\n");
				printf("\tJE @%d\n", node->label->false_label);
			}
			else
			{
				printf("\n"
					"MOV t%d, eax\n", node->temp_var);
			}*/
			IsTypeboolean
			break;
		case SUB:
			printf("\tMOV eax,");
			print_attr(node->child[0]);
			printf("\n");
			printf("\tSUB eax,");
			print_attr(node->child[1]);
			printf("\n");
			/*printf("\n"
				"MOV t%d, eax\n", node->temp_var);*/
			IsTypeboolean
			break;
		case MUL:
			printf("\tMOV eax,");
			print_attr(node->child[0]);
			printf("\n");
			printf("\tMOV ecx,");
			print_attr(node->child[1]);
			printf("\n");
			printf("\tMUL ecx\n");
			/*printf("\n"
				"\tMOV t%d, eax\n", node->temp_var);*/
			IsTypeboolean
			break;
		case DIV:
		case MOD:
			printf("\tMOV edx,0\n");
			printf("\tMOV eax,");
			print_attr(node->child[0]);
			printf("\n");
			printf("\tMOV ecx,");
			print_attr(node->child[1]);
			printf("\n");
			printf("\tDIV ecx\n");
			//printf("\n");
			if (node->attr.op==DIV)
				/*printf("\n"
					"\tMOV t%d, eax\n", node->temp_var);*/
					IsTypeboolean
			else
			{
				if (node->type == Boolean)
				{
					printf("\tCMP edx,0\n");
					printf("\tJE @%d\n", node->label->false_label);
				}
				else
				{
					printf("\n"
					"\tMOV t%d, edx\n", node->temp_var);
				}
			}
			break;
		case LS:
		case RS:
			printf("\tMOV eax,");
			print_attr(node->child[0]);
			printf("\n");
			if (node->attr.op == LS)
				printf("\tSAL eax,");
			else
				printf("\tSAR eax,");
			print_attr(node->child[1]);
			printf("\n");
			IsTypeboolean
				break;
		case ASSIGN:
			printf("\tMOV eax,");
			print_attr(node->child[1]);
			printf("\n");
			printf("\tMOV ");
			print_attr(node->child[0]);
			printf(",eax\n");
			if (node->type == Boolean)
			{
				printf("\tCMP eax,0\n"
					"\tJE @%d", node->label->false_label);
			}
			break;
		case bAND:
			printf("\tMOV eax,");
			print_attr(node->child[0]);
			printf("\n");
			printf("\tAND eax,");
			print_attr(node->child[1]);
			printf("\n");
			IsTypeboolean
				break;
		case bOR:
			printf("\tMOV eax,");
			print_attr(node->child[0]);
			printf("\n");
			printf("\tOR eax,");
			print_attr(node->child[1]);
			printf("\n");
			IsTypeboolean
				break;
		case bXOR:
			printf("\tMOV eax,");
			print_attr(node->child[0]);
			printf("\n");
			printf("\tXOR eax,");
			print_attr(node->child[1]);
			printf("\n");
			IsTypeboolean
				break;
		case bNOT:
			printf("\tMOV eax,");
			print_attr(node->child[0]);
			printf("\tNOT eax");
			IsTypeboolean
			break;
		case UMINUS:
			printf("\tMOV eax,");
			print_attr(node->child[0]);
			printf("\n");
			printf("\tNEG eax\n");
			IsTypeboolean
				break;
		case OR:
			printf("@%d:\n", node->child[0]->label->false_label);
			recur_gen_code(node->child[1]);
			printf("@%d:\n", node->child[0]->label->true_label);
			break;
		case AND:
			printf("@%d:\n", node->child[0]->label->true_label);
			recur_gen_code(node->child[1]);
			break;
		case LT:
			printReOp(node, "JGE");
			break;
		case GT:
			printReOp(node, "JLE");
			break;
		case LTE:
			printReOp(node, "JG");
			break;
		case GTE:
			printReOp(node, "JL");
			break;
		case EQ:
			printReOp(node, "JNE");
			break;
		case NEQ:
			printReOp(node, "JE");
			break;
		case NOT:
			if (node->type == Int)
			{
				printf("\tMOV eax,");
				print_attr(node->child[0]);
				printf("\n");
				printf("\tCMP eax,0\n");
				int tempLabel1 = newlabel();
				int tempLabel2 = newlabel();
				printf("\tJE @%d\n", tempLabel1);
				printf("\tMOV t%d 1\n", node->temp_var);
				printf("\tJMP @%d\n", tempLabel2);
				printf("@%d:", tempLabel1);
				printf("\tMOV t%d 0\n", node->temp_var);
				printf("@d:\n", tempLabel2);
			}
			break;
		}
		break;
	case InitK:
		printf("\tMOV eax,");
		print_attr(node->child[0]);
		printf("\n");
		printf("\tMOV _%s",node->attr.name);
		printf(",eax\n");
		break;
	case IdK:
	case ConstCK:
	case ConstK:
		if (node->type == Boolean)
		{
			printf("\tMOV eax,");
			print_attr(node);
			printf("\n");
			printf("\tCMP eax,0\n"
				"\tJE @%d\n", node->label->false_label);
		}
		break;
	case IdlistK:
		break;
	}
}

void recur_gen_code(TreeNode *node)
{
	if (!node)
		return;
	if (node->nodeKind == StmtK)
		gen_StmtNode(node);
	else if (node->nodeKind == ExpK)
		gen_ExpNode(node);
	recur_gen_code(node->sibling);
}

void printReOp(TreeNode *node, char *jmpOp)
{

	printf("\tMOV eax,");
	print_attr(node->child[0]);
	printf("\n");
	printf("\tCMP eax,");
	print_attr(node->child[1]);
	printf("\n");
	if (node->type == Boolean)
	{
		printf("\t%s @%d\n",jmpOp, node->label->false_label);
	}
	else
	{
		int tempLabel1 = newlabel();
		int tempLabel2 = newlabel();
		printf("\t%s @%d\n", jmpOp, tempLabel1);
		printf("\tMOV t%d,1\n", node->temp_var);
		printf("\tJMP @%d\n", tempLabel2);
		printf("@%d:\n", tempLabel1);
		printf("\tMOV t%d,0\n", node->temp_var);
		printf("@%d:\n", tempLabel2);
	};
}