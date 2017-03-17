#include "TreeNode.h"
#include "_parser.h"
#include"SymTab.h"

extern int lineNum;


TreeNode *newStmtNode(StmtKind kind)
{
	TreeNode *temp = malloc(sizeof(TreeNode));
	if (temp == NULL)
	{
		printf("Out of Memory in line: %d", lineNum);
		return NULL;
	}
	int i = MAXCHILD;
	for (int i = 0; i < MAXCHILD; i++)
		temp->child[i] = NULL;
	temp->sibling = NULL;
	temp->nodeKind = StmtK;
	temp->kind.stmt = kind;
	temp->lineno = lineNum;
	temp->temp_var = -1;
	temp->label = malloc(sizeof(Label));
	temp->label->begin_label = -1;
	temp->label->false_label = -1;
	temp->label->next_label = -1;
	temp->label->true_label = -1;
	return temp;
}
TreeNode *newExpNode(ExpKind kind)
{
	TreeNode *temp = malloc(sizeof(TreeNode));
	if (temp == NULL)
	{
		printf("Out of Memory in line: %d", lineNum);
		return NULL;
	}
	int i = MAXCHILD;
	for (int i = 0; i < MAXCHILD; i++)
		temp->child[i] = NULL;
	temp->sibling = NULL;
	temp->nodeKind = ExpK;
	temp->kind.exp = kind;
	temp->lineno = lineNum;
	temp->temp_var = -1;
	temp->label = malloc(sizeof(Label));
	temp->label->begin_label = -1;
	temp->label->false_label = -1;
	temp->label->next_label = -1;
	temp->label->true_label = -1;
	return temp;
}

char *copyString(char *s)
{
	if (s == NULL)
		return NULL;
	char *t;
	int n = strlen(s) + 1;
	t = malloc(n);
	if (t == NULL)
		printf("Out of Memory in CopyString");
	else strcpy(t, s);
	return t;
}

static int spaceNum = 0;

#define INC spaceNum+=2
#define DEC spaceNum-=2


void printSpace()
{
	for (int i = 0; i < spaceNum; i++)
		printf(" ");
}
void printOp(int op){
	switch (op){
	case(ASSIGN) :
		printf("=");
		break;
	case(LT) :
		printf("<");
		break;
	case(GT) :
		printf(">");
		break;
	case (bAND):
		printf("&");
		break;
	case (bOR):
		printf("|");
		break;
	case (bNOT):
		printf("~");
		break;
	case (NOT):
		printf("!");
		break;
	case (NEQ):
		printf("!=");
		break;
	case (MOD):
		printf("%%");
		break;
	case(SADD_F) :
		printf("++_F");
		break;
	case(SADD_B):
		printf("++_B");
		break;
	case(SSUB_F) :
		printf("--_F");
		break;
	case(SSUB_B):
		printf("--_B");
		break;
	case(EQ) :
		printf("==");
		break;
	case(ADD) :
		printf("+");
		break;
	case(SUB) :
		printf("-");
		break;
	case(MUL) :
		printf("*");
		break;
	case(DIV) :
		printf("/");
		break;
	case(AND) :
		printf("&&");
		break;
	case(OR) :
		printf("||");
		break;
	case(LS) :
		printf("<<");
		break;
	case(RS) :
		printf(">>");
		break;
	case (LTE) :
		printf("<=");
		break;
	case (GTE) :
		printf(">=");
		break;
	case(UMINUS) :
		printf("UMINUS");
		break;
	case (bXOR) :
		printf("^");
		break;
	default:
		printf("Unknown Op");
	}
}
void printTree(TreeNode *root)
{
	INC;
	while (root)
	{
		printSpace();
		{
			if (root->nodeKind == StmtK)
			{
				switch (root->kind.stmt){
				case(IfK) :
					printf("IfK ");
					break;
				case(WhileK) :
					printf("WhileK ");					
					break;
				case(ForK) :
					printf("ForK ");
					break;
				case(DeclK) :
					printf("DeclK ");
					break;
				case(AssignK) :
					printf("AssignK ");
					printf("ID name : %s ", root->attr.name);
					break;
				case(EmptyK) :
					printf("EmptyK ");
					break;
				case (IfElseK) :
					printf("IfElseK ");
					break;
				case (InputK) :
					printf("InputK ");
					break;
				case (OutputK) :
					printf("OutputK ");
					break;
				default:
					printf("Unknown Stmt Kind ");
					break;
				}
				printLabel(root->label);
				printf("\n");
			}
			else if (root->nodeKind == ExpK)
			{
				printType(root->type);
				switch (root->kind.exp){
				case(InitK) :
					printf("InitK: ");
					printf("%s\n", root->attr.name);
					break;
				case(OpK) :
					printf("OpK:");
					printOp(root->attr.op);
					printf("  ");
					printLabel(root->label);
					if (root->temp_var != -1)
						printf("  temp_var: %d", root->temp_var);
					printf("\n");
					break;
				case(ConstK) :
					printf("ConstK: ");
					printf("%d\n", root->attr.val);
					break;
				case(ConstCK) :
					printf("ConstCK: ");
					printf("%c\n", root->attr.charVal);
					break;
				case(IdK) :
					printf("IdK :");
					printf("%s ", root->attr.name);
					printLabel(root->label);
					printf("\n");
					break;
				case(IdlistK) :
					printf("IdList\n");
					//printf("%s\n", root->attr.name);
					break;
				default:
					printf("Unknown expr\n");
					break;
				}
			}
			else
				printf("Unknown Node Kind\n");
		}
		for (int i = 0; i < MAXCHILD; i++)
			printTree(root->child[i]);
		root = root->sibling;
	}
	DEC;
}

ExpType char2type(char *yytext)
{
	switch (yytext[0]){
	case 'i':
		return Int;
	case 'c':
		return Char;
	case 'b':
		return Boolean;
	default:
		return Void;
	}
}

/*int addTempVar(TreeNode *node)//需要增加临时变量时返回1，否则返回0
{
	TreeNode *e1 = node->child[0];
	TreeNode *e2 = node->child[1];
	if (!(e1&&e2))
		return 0;
	int ret = 0;
	if (e1->kind.exp == OpK)
		++ret;
	if (e2->kind.exp == OpK)
		++ret;
	return ret;
}*/

void checkNode(TreeNode **node)//检查节点
{
	if (!(*node))
		return;
	switch ((*node)->nodeKind)
	{
		case ExpK:
		{
					 switch ((*node)->kind.exp)
					 {
					 case OpK:
						 (*node)->type = (*node)->child[0]->type;
						 TreeNode *e1 = (*node)->child[0];
						 if ((*node)->attr.op == ASSIGN&&e1->kind.exp != IdK)
						 {
							 printf("Missing left value!! lineNum: %d\n",(*node)->lineno);//检查赋值符号左边是否为一个左值。
						 }
						 switch ((*node)->attr.op){
						 case LT:
						 case GT:
						 case LTE:
						 case GTE:
						 case EQ:
						 case NEQ:
						 case NOT:
							 //(*node)->type = Boolean;
							 break;
						 deafult:
							 break;
						 }
						/* if ((*node)->attr.op == NOT)
						 {
							 e1->type = Boolean;
						 }*/
						 TreeNode *e2 = (*node)->child[1];
						 /*if ((*node)->attr.op == OR || (*node)->attr.op == AND)
						 {
							 e1->type = Boolean;
							 e2->type = Boolean;
						 }*/
						 /*if ((*node)->attr.op != ASSIGN && (*node)->type!=Boolean)//生成临时变量,这里不应该做临时变量生成
							 (*node)->temp_var = temp_var_seq++;//bool型不需要临时变量
						 /*if (e1&&e1->kind.exp == OpK)
							 e1->temp_var = temp_var_seq++;
						 if (e2&&e2->kind.exp == OpK)
							 e2->temp_var = temp_var_seq++;*/
						break;
					 case IdK:
					 {
								 struct word *temp = lookup(symbol_table, (*node)->attr.name);//What if the name can't be found?
								 if (!temp)
								 {
									 printf("unknown identifier: %s\n", (*node)->attr.name);
									 (*node)->type = Void;
									 break;
								 }
								 (*node)->type = temp->type;
								 break;
					 }
					 case ConstK:
						 (*node)->type = Int;
						 break;
					 case ConstCK:
						 (*node)->type = Char;
						 break;
					 case InitK:
					 {
								   TreeNode *e1 = (*node)->child[0];
								   //TreeNode *e2 = (*node)->child[1];
								   if (e1->kind.exp == OpK)
									   e1->temp_var = temp_var_seq++;
					 }
					 case IdlistK:
						break;
					 }
		}
			break;
		case StmtK:
		{
					  switch ((*node)->kind.stmt)
					  {
					  case ForK:
						  (*node)->child[1]->type = Boolean;
						  break;
					  case IfK:
					  case IfElseK:
					  {
									  if ((*node)->child[0] == NULL)
										  printf("If test lack expr!\n");
									  (*node)->child[0]->type = Boolean;
									  break;
					  }
					  case WhileK:
					  {
									 if ((*node)->child[0] == NULL)
										 printf("While test lack expr!\n");
									 (*node)->child[0]->type = Boolean;
									 break;
					  }
					  case AssignK:
					  {
									  TreeNode *e2 = (*node)->child[0];
									  if (e2&&e2->nodeKind == ExpK&&e2->kind.exp == OpK)
										  temp_var_seq++;
					  }
					  default:
						  break;
					  }
		}
	}	
}

void posTraverse(TreeNode *root, void(*func)(TreeNode **)){
	if (!root)
		return;
	for (int i = 0; i < MAXCHILD; i++)
		posTraverse(root->child[i], func);
	func(&root);
	posTraverse(root->sibling, func);
}

int newlabel()
{
	static int label = 1;
	return label++;
}

void labelOn(TreeNode *root,int p_label)//p_label为父亲节点的begin_label
{
	if (root->sibling)
	{
		//root->sibling->label->begin_label = newlabel();
		root->label->next_label = newlabel();
		root->sibling->label->next_label = p_label;
	}
	else 
	{
		if (p_label == -1)
			root->label->next_label = newlabel();
		else
			root->label->next_label = p_label; 
	}
	//if (root->nodeKind == StmtK && root->label->begin_label == -1)
		//root->label->begin_label = newlabel();
	switch (root->nodeKind){
	case StmtK:
	{
				  switch (root->kind.stmt){
				  case IfK:
				  {
							  root->label->next_label = newlabel();
							  TreeNode *e1 = root->child[0];
							  TreeNode *e2 = root->child[1];
							  e1->label->true_label = newlabel();
							  e1->label->false_label = root->label->next_label;
							  e2->label->next_label = root->label->next_label;
							  break;
				  }
				  case IfElseK:
				  {
								  root->label->next_label = newlabel();
								  TreeNode *e1 = root->child[0];
								  TreeNode *e2 = root->child[1];
								  TreeNode *e3 = root->child[2];
								  e1->label->true_label = newlabel();
								  e1->label->false_label = newlabel();
								  e2->label->next_label = root->label->next_label;
								  e3->label->next_label = root->label->next_label;
								  break; 
				  }
				  case WhileK:
				  {
								 TreeNode *e1 = root->child[0];
								 TreeNode *e2 = root->child[1];
								 //if (root->label->begin_label == -1)
									 root->label->begin_label = newlabel();
								 e1->label->true_label = newlabel();
								 e1->label->false_label = root->label->next_label;
								 e2->label->next_label = root->label->begin_label;
								 break;
				  }
				  case ForK:
				  {
							   
							   TreeNode *e1 = root->child[0];
							   TreeNode *e2 = root->child[1];//代码生成的时候考虑为空时不产生e2的代码
							   TreeNode *e3 = root->child[2];
							   TreeNode *s1 = root->child[3];
							   //if (root->label->begin_label == -1)
									root->label->begin_label = newlabel();
							   if (e2)
							   {
								   e2->label->true_label = newlabel();
								   e2->label->false_label = newlabel();
							   }
							   s1->label->next_label = newlabel();
							   break;
				  }
				  default:
					  break;
				  }
	}
		break;
	case ExpK:{
				  switch (root->kind.exp){
				  case OpK:
				  {
							  TreeNode *e1 = root->child[0];
							  TreeNode *e2 = root->child[1];
							  if (root->type == Boolean//对于&&,||,!全部认为生成boolean型变量，且左右孩子都为boolean型
								  && (root->attr.op == AND || root->attr.op == OR || root->attr.op==NOT))
							  {
								  if (e1)
									  e1->type = Boolean;
								  if (e2)
									  e2->type = Boolean;
							  }
							  if (root->type != Boolean&&root->attr.op!=ASSIGN)
								  root->temp_var = temp_var_seq++;
							  if (e1->type == Boolean)
							  {
								  e1->label->true_label = newlabel();
								  e1->label->false_label = newlabel();
							  }
							  if (e2&&e2->type == Boolean)//!不存在e2
							  {
								  e2->label->true_label = newlabel();
								  e2->label->false_label = newlabel();
							  }
							  switch (root->attr.op)
							  {
							  case AND:
							  {
										  e1->label->true_label = newlabel();
										  e1->label->false_label = root->label->false_label;
										  e2->label->true_label = root->label->true_label;
										  e2->label->false_label = root->label->false_label;
										  break;
							  }
							  case OR:
							  {
										 e1->label->false_label = newlabel();
										 e1->label->true_label = root->label->true_label;
										 e2->label->true_label = root->label->true_label;
										 e2->label->false_label = root->label->false_label;
										 break;
							  }
							  case NOT:
							  {
										  e1->label->false_label = root->label->true_label;
										  e1->label->true_label = root->label->false_label;
										  break;
							  }
							  /*case LE:
							  case RE:
							  case LTE:
							  case GTE:
							  case EQ:
							  case NEQ:
							  {
										  root->label->true_label = newlabel();
										  root->label->false_label = newlabel();
										  break;
							  }*/
							  default:
								  break;
							  }

							  break;
				  }
				  default:
					  break;
				  }
	}
		break;
	}
}

void preTraverse(TreeNode *root,int p_label){//先序遍历
	if (!root)
		return;
	labelOn(root,p_label);
	for (int i = 0; i < MAXCHILD; i++)
		preTraverse(root->child[i],root->label->begin_label);
	preTraverse(root->sibling,p_label);
}

void printLabel(Label *label)
{
	printf("Begin Label: %d,Next Label: %d, True Label:%d,False Label:%d", label->begin_label, label->next_label, label->true_label, label->false_label);
}