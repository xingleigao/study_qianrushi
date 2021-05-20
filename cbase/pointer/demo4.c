#include<stdio.h>

int main(){
	
	int a[5] = {4, 8, 1, 2, 7};
	int * p, * q;
	p = a;
	q = &a[3];

	printf("%p %p\n",p ,q);
	printf("%d %d %d\n",* p, *q,p-q);

	return 0;
}
