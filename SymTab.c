#include"SymTab.h"
#include<string.h>
#include<malloc.h>



bool insert(struct word** symbol_table, char *name, ExpType type)
{
	if (*symbol_table == NULL)
	{
		*symbol_table = (struct word *)malloc(sizeof(struct word));
		strcpy((*symbol_table)->name, name);
		(*symbol_table)->type = type;
		(*symbol_table)->next = NULL;
		return true;
	}
	struct word *current = *symbol_table;
	//printf("%p", current);
	while (current->next)
	{
		if (strcmp(current->name, name) == 0)
			return false;
		current = current->next;
	}
	//printf("%s\n", (*current)->name);
	//printf("%s\n", name);
	if (strcmp(current->name, name) == 0)
		return false;
	struct word *next = (struct word *)malloc(sizeof(struct word));
	next->next = NULL;
	strcpy(next->name, name);
	next->type = type;
	current->next = next;
	return true;
}

const struct word *lookup(struct word *symbol_table, char * name)
{
	//if (*symbol_table == NULL)
		//return NULL;
	struct word * current = symbol_table;
	while (current)
	{
		if (strcmp(current->name, name) == 0)
			return current;
		current = current->next;
	}
	return NULL;
}

void printSymTab(struct word *symbol_table)
{
	struct word *current = symbol_table;
	while (current)
	{
		printf("name: %s   ", current->name);
		printType(current->type);
		printf("address: %p\n", current);
		current = current->next;
	}
}


void printType(ExpType type)
{
	switch (type)
	{
	case Int:
		printf("type: Int   ");
		break;
	case Void:
		printf("type: Void   ");
		break;
	case Char:
		printf("type: Char   ");
		break;
	case Boolean:
		printf("type: Bool   ");
		break;
	default:
		printf("Unknown Type   ");
	}
}

