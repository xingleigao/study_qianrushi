#include<stdio.h>

int main(){
	int i, j;
	char ch = 'F';
	printf("please input char:");
	ch=getchar();
	for( i = 0; i <= ch - 'A' ; i++){
		for(j = 0;j <i ;j++)
			putchar('_');
		for(j = 0;j <= i ; j++)
			putchar(ch - j);
		putchar('\n');
	}
	return 0;
}
