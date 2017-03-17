#include"stdio.h"
#include"stddef.h"

struct word
{
	struct word *next ;
	char name[100];
};

struct word *symbol_table = NULL;

struct word *lookup(struct word** symbol_table,char *name)
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
}


void main()
{
	int i = 0;
	while (1)
	{
		char a[10];
		scanf("%s", a);
		struct word *ad = lookup(&symbol_table, a);
		printf("%p\n", ad);
	}
	struct word *current = symbol_table;
	while (current)
	{
		printf(" %p %s \n", current, current->name);
		current = current->next;
	}
	system("Pause");
}