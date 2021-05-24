#include<stdio.h>

int main(){
	int * p[2];
	int a[2][3] = {{1, 4, 6}, {12, 9, 7}};

	p[0] = a[0];
	p[1] = a[1];

	printf("%d\n", a[0][1]);
	printf("%d\n",*(a[0]+1));
	printf("%d\n",*(p[0]+1));

	printf("%d\n",*(p[1]+2));

	return 0;
}
