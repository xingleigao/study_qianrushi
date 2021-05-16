#include<stdio.h>

#define W 3.0e-23
#define C 950

int main(){
	float n,total;
	printf("please input:");
	scanf("%f",&n);
	total=n*C/W;
	printf("%e\n",total);
	return 0;
}
