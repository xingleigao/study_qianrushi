#include <stdio.h>

double power(double ,int );

int main()
{
	double x = 2;
	int n = 2;
	double ret;

	ret = power(x,n);
	
	printf("%lf %d = %lf\n", x, n, ret);

	return 0;
}

double power(double a,int b){
	double sum = 1;
	for( int i = 0; i < b;i++)
		sum *= a;
	return sum;
}
