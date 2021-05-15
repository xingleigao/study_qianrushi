#include<stdio.h>

#define ONE (1+1)
#define TWO (ONE+ONE)

int main(){
	int a=10,b=20,c;
	c=ONE+TWO*b+a;
	printf("%d\n",c);
	return 0;
}
