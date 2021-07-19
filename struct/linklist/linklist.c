#include "linklist.h"

linklist list_create(){
	linklist H;

	if ((H = (linklist)malloc(sizeof(listnode))) == NULL)
	{
		printf("malloc failed!\n");
		return H;
	}
	
	H->data = 0;
	H->next = NULL;
	return H;
}

linklist list_create2(){
	linklist H,r,p;
	int value;

	if ((H = (linklist)malloc(sizeof(listnode))) == NULL)
	{
		printf("malloc failed!\n");
		return H;
	}
	H->data = 0;
	H->next = NULL;
	r = H;
	while(1){
		printf("input a number(-1,exit):");
		scanf("%d",&value);
		if(value == -1){
			break;
		}
		if ((p = (linklist)malloc(sizeof(listnode))) == NULL)
		{
			printf("malloc failed!\n");
			return H;
		}
		p->data = value;
		p->next = NULL;
		r->next = p;
		r = p;
	}
	return H;
}

void list_show(linklist H)
{
	while(H->next){
		printf("%d ",H->next->data);
		H = H->next;
	}
	printf("\n");
}

linklist list_get(linklist H,int pos){
	linklist p = H;
	int i = -1;
	
	if(pos < 0){
		printf("position is invalid:<0\n");
		return NULL;
	}
	while(p->next && i < pos){
		p = p->next;
		i++;
	}
	if( i == pos)
		return p;
	else {
		printf("position is invalid:>length\n");
		return NULL;	
	}
}

linklist list_locate(linklist H, datatype value){
	linklist p = H->next;

	while(p&&p->data != value){
		p = p->next;
	}
	
	return p;
}

int list_head_insert(linklist H,datatype value){
	linklist p;
	if((p = (linklist)malloc(sizeof(listnode))) == NULL)
	{
		printf("malloc failed\n");
		return -1;
	}
	p->data = value;
	p->next = H->next;
	H->next = p;
	return 0;
}


