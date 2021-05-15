#include<stdio.h>
#include<math.h>

int main()
{
	int n,tmp,i;
loop:
	printf("input n(n>3):");
	if (scanf("%d",&n) == 0){
		printf("input error!\n");
		getchar();
		goto loop;
	}


	i = 2;
	tmp = sqrt(n);
	while ( i <= tmp){
		if (n % i ==0)
			break;
		i++;
	}
	if(i <= tmp)
		printf("%d not\n",n);
	else
		printf("%d yes\n",n);	
	return 0;
}
