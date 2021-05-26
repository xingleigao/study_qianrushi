#include<stdio.h>
#include<string.h>

char * getstring();

int main()
{
	printf("----%s----\n",getstring());

	return 0;
}

char * getstring()
{
	//static char str[20];
	char * str = "hello";
	//strcpy(str,"hello");

	return str;
}
