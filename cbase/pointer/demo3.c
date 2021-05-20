#include<stdio.h>

int main(){
	
	int a = 10, * p;
	double b = 3, * q;

	q = &a;
	p = &b;

	printf("%p %p\n",p ,p+2);
	printf("%p %p\n",q ,q+2);

	return 0;
}
