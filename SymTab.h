#ifndef _SYMTAB_H
#define _SYMTAB_H

#include"TreeNode.h"

//typedef enum { INT, CHAR } Type;
typedef enum{false = 0,true} bool;

struct word
{
	struct word *next;
	char name[100];
	//char type[100];
	ExpType type;
	union{ 
		int Intval;
		char CharVal;
	}val;
};

typedef union{
	int IntVal;
	char CharVal;
} Initial;

struct word *symbol_table = NULL;

bool insert(struct word** symbol_table, char *name, ExpType type);

const struct word *lookup(struct word *symbol_table, char * name) ;

void printSymTab(struct word *symbol_table);
void printType(ExpType type);
#endif