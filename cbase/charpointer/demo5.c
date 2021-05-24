#include<stdio.h>

int main(){
	
	char ch[100] = "welcome";
	char * p = "Hello World!", *q;
	
	//strcpy(ch,p1);
	//strcat(ch,p1);
	q = p;
	int i = 0;
	while(*(ch+i) != '\0')
		i++;
	while(*p != '\0'){
		*(ch+i) = *p;
		i++;
		p++;
	}
	*(ch+i) = *p;

	p = q;
	puts(ch);
	puts(p);

	return 0;

}
