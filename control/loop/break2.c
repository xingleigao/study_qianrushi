#include<stdio.h>
#include<math.h>

int main()
{
	int n,tmp,i;
	printf("input n(n>3):");
	scanf("%d", &n);

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
