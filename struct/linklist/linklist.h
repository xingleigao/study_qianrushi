#ifndef _LINKLIST_H_
#define _LINKLIST_H_

#include<stdio.h>
#include<stdlib.h>

typedef int datatype;

typedef struct node{
	datatype data;
	struct node *next;
}listnode, *linklist;

extern linklist list_create();
extern linklist list_create2();
extern int list_head_insert(linklist H,datatype value);
extern linklist list_get(linklist H,int pos);
extern void list_show(linklist H);

#endif
