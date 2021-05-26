#include<stdio.h>

void del_space(char *str);

int main(int argc,char argv[])
{
	char s[] = "    solsjdkajdk    sad sad ";
	
	puts(s);
	del_space(s);
	puts(s);
	
	return 0;
}

void del_space(char * str)
{
	char *s1 = str,*s2 = str;
	while(*s1){
		if(*s1 == ' '){
			s1++;
		}
		else{
			*s2 = *s1;
			s1++;
			s2++;
		}
	}
	*s2 = 0;	
}
