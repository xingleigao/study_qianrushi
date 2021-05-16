#include<stdio.h>
int main(){
	char ch1,ch2;
	ch1='A';
//	ch2='a';
	ch2= ch1+' '+2;
	printf("%c %c\n",ch1,ch2);
	printf("%d %d\n",ch1,ch2);
	ch1='0';
	ch2=ch1+2;
	printf("%c %c\n",ch1,ch2);
	printf("%d %d\n",ch1,ch2);
	return 0;
}
