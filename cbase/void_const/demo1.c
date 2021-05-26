#include<stdio.h>

int main(){
	int m = 10;
	double n = 3.14;
	void *p, *q;
	
	p = (void *)&m;
	
	printf("%d %d\n", m, *(int *)p);

	q = (void *)&n;
	printf("%.2lf %.2lf\n", n, *(double *)q);

	return 0;
}
