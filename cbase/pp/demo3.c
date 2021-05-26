#include<stdio.h>

int main(){

	//char *s1 = "apple";
	//char *s2 = "pear";
	char *s[] = {"apple","pear","potato"};
	char **p;
	int i, n;
	i = 0;
	n = sizeof(s) /sizeof(char *);
	p = &s[0];
	
	while ( i < n){
	printf("%s %s\n",s[i],*(p+i));
	i++;
	}

	return 0;
}

