#include<stdio.h>

int main(){

	int m = 10;
	int * p;
	int **q;

	p = &m;
	
	q = &p;

	printf("%p %p\n", p, &m);
	printf("%p %p\n", q, &p);
	printf("%d %d %d\n", m, *p, **q);
	printf("%p %p\n",q,q+1);
	return 0;
}

