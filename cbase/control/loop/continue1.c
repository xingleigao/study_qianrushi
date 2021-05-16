#include<stdio.h>

int main()
{
	int n;

	for (n = 100; n<= 120; n++){
		if(n % 3 == 0)
			continue;
		printf("%d\n",n);	
	}

	return 0;
}
