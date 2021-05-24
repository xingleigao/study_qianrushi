#include<stdio.h>
#include<ctype.h>

int main(){
	
	char * p1 = "Hello World!";
	char * p2 = "Hello World!";
	
	*p1 -= 32;

	printf("%p %p %s\n", &p1, p1, p2);
	
	printf("%p %p %s\n", &p2, p2, p2);

	return 0;

}
