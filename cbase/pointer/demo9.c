#include<stdio.h>

int main(){
	
	int a[3][2]= {{1, 6}, {9, 12}, {63, 12}};
	int * p, i, n;

	n = sizeof(a) / sizeof(int);
	
	//a[i]++;
	printf("%d\n",sizeof(a[0]));

	p = a[0];
	printf("%p %p\n", p, p+1);
	printf("%p %p\n", a, a+1);
	
	for (i = 0; i < n; i++)
	       printf("%d ",*(p+i));
	puts(" ");	
	
	return 0;
}
