#include <stdio.h>

int main(){
	int a[10][10] = {{0}};
	int i,j;
	for (i = 0; i < 10; i++){
		a[i][0] = 1;
		for ( j = 1; j <= i; j++){
			a[i][j] = a[i-1][j-1] + a[i-1][j];
		}
	}
	for ( i = 0; i < 10; i++){
		for ( j = 0; j <= i; j++)
			printf("%-8d",a[i][j]);
		putchar('\n');
	}	
	return 0;
}
