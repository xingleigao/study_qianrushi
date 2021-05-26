#include<stdio.h>

int array_sum(int data[],int n);

int main(int argc,char argv[])
{
	int a[] = {5, 9, 10, 3, 10};
	int sum;

	sum = array_sum(a,sizeof(a) /sizeof(int));
	
	printf("n=%d\n",sum);
	
	return 0;
}

int array_sum(int data[],int n)
{
	int ret = 0;
	int i;
	for(i = 0; i < n; i++){
		printf("%d\n",data[i]);
		ret += data[i];
	}
	return ret;

}
