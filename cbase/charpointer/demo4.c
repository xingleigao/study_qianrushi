#include<stdio.h>
#include<string.h>

int main(){
	
	char ch[] = "welcome";
	char * p1 = "Hello World!";
	
	//strcpy(ch,p1);
	strcpy(p1,ch);

	puts(ch);
	puts(p1);

	return 0;

}
