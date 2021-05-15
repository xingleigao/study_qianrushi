#include<stdio.h>

extern int global_a;

int main(){
	printf("global_a=%d\n",global_a);
	return 0;
}
