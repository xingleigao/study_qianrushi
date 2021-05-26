#include<stdio.h>
#include<string.h>

char * del_space(char * s);

int main()
{
	char * r;
	char str[] = "   how    are    you    ";
	char s[50],s2[50];

	r = del_space(str);
	printf("----%s----\n",r);
	
	strcpy(s2,strcpy(s,del_space(str)));
	puts(str);
	puts(s);
	puts(s2);
	
	
	return 0;
}

char * del_space(char *s)
{
	char *r =s;
	char * p = s;
	while (*s){
		if(*s == ' ') s++;
		else {
			*p = *s;
			s++;
			p++;
		}
	}	
	*p = '\0';
	return r;
}


