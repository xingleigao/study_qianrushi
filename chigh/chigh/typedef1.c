#include<stdio.h>

typedef struct noede{
	int data;
	struct node *next;
}listnode,*linklist;

int main(int argc, const char *argv[]){

	listnode n1, n2, n3;
	linklist p;
	n1.data = 10;
	n1.next = NULL;
	
	n2.data = 20;
	n2.next = NULL;
	
	n3.data = 40;
	n3.next =NULL;
	
	p = &n1;

	return 0;

}
