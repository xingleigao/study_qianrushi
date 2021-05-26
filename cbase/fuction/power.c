#include <stdio.h>

double power(double x,int n){
	double sum = 1;
	for( int i = 0; i < n;i++)
		sum *= x;
	return sum;
}

int main()
{
	double x, ret;
	int n;

	printf("input:");
	scanf("%lf%d",&x,&n);
	ret = power(x,n);
	printf("%lf %d = %lf\n", x, n, ret);

	return 0;
}
