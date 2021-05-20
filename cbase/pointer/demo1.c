#include<stdio.h>

int main(){
	int a = 10;

	int *p = &a;
	
	printf("%p %p\n",p ,&a );

	printf("%d %d\n",a ,*p );

	return 0;
}
