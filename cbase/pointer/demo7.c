#include<stdio.h>

int main(){
	
	int a[] = {1, 6, 9, 12, 61, 12, 21};
	int * p, *q, temp, n;

	n = sizeof(a) / sizeof(int);
	
	p = a;
	q = &a[n-1];
	
	while(p < q){
		temp = *q;
		* q = *p;
		* p = temp;
		p++;
		q--;
	}
	for( int i = 0;i < n; i++)
		printf("%d ",a[i]);
	return 0;
}
