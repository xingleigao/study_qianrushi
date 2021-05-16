#include<stdio.h>

int main()
{
	int i = 1;
	int sum = 0;

	do{
		sum += i;
		i++;
	}while(i <= 100);

	printf("1+2+...+%d=%d\n",i-1,sum);
	return 0;
}
