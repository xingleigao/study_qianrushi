#include<stdio.h>
#include<string.h>

int main(){
	
	char s1[10] = {'A','0','B','\0','C'};

	printf("%d\n",strlen(s1));
	printf("%d\n",sizeof(s1)/sizeof(char));

	return 0;
}

