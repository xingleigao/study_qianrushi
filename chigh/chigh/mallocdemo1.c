#include<stdio.h>
#include<stdlib.h>

int main(int argc,const char *argv[])
{
	char * p;

	p = (char *)malloc(10*sizeof(char));
	if(p == NULL){
		printf("malloc failed\n");
		return 0;
	}
	printf("%p\n",p);
	printf("input");
	scanf("%s",p);
	puts(p);
	free(p);
	p = NULL;
	printf("%p\n",p);
	return 0;
}
