#include<stdio.h>

int main()
{
	int i = 1;
	int sum = 0;

	while(i <= 100){
		sum += i;
		i++;
	}

	printf("1+2+...+%d=%d\n",i-1,sum);
	return 0;
}
