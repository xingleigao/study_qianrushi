#include<stdio.h>

int add(int a, int b)
{
	return a+b;
}

int main(int argc,char *argv[])
{
	int m = 10, n = 20;
	int (*p)(int ,int );

	p = add;
	printf("%d\n",(*p)(m,n));
	return 0;
}
