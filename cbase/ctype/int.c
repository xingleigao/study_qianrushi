#include<stdio.h>
#include<limits.h>
int main(int argc,char *argv[])
{
	printf("%ld %ld %ld %ld\n",sizeof(_Bool),sizeof(char),sizeof(short),sizeof(int));
	printf("char: %d %d\n",SCHAR_MIN,SCHAR_MAX);
	printf("short:%d %d\n",SHRT_MIN,SHRT_MAX);
	printf("int:%d %d\n",INT_MIN,INT_MAX);
	return 0;
}
