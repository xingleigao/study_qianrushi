#include <stdio.h>

void swap(int *,int *);

int main()
{
	int a = 10;
	int b = 20;
	int t;

	printf("before:%d %d \n", a, b);

	swap(&a,&b);
	
	printf("after:%d %d\n", a, b);
	
	return 0;
}

void swap(int *x, int *y)
{
	int t;
	t = *x;
       	*x = *y;
	*y = t;       
}
