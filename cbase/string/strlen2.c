#include<stdio.h>
#include<string.h>

int main(){
	
	char s1[] = "\tab\nc\vd\\e";
	char s2[] = "\x69\141";

	printf("%ld\n",strlen(s2));
	printf("%ld\n",sizeof(s2)/sizeof(char));
	puts(s2);

	return 0;
}

