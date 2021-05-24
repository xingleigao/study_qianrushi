#include<stdio.h>

int main(){
	
	int a[] = {1, 6, 9, 12, 61, 12, 21};
	int * p, i, n;

	p = a;
	n = sizeof(a) / sizeof(int) ;
	
	printf("%p %p %p\n", &a[3], p+3, a+3);

	for (i = 0; i < n; i++)
		printf("%d %d %d %d %d\n", a[i], *(p+i), *(a+i), p[i], a[i]);
	puts(" ");

	return 0;
}
