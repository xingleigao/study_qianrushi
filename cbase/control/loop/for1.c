#include<stdio.h>

int main()
{
	int i, sum;

	sum =0;
	i = 1;

	for (;;){
		sum += i;
		i++;
		if (i >100) 
			break;
	}	
	printf("sum=%d\n",sum);
	return 0;
}
