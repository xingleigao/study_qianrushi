#include<stdio.h>
#include<string.h>

#define N 20

int main(){
	char arr[N] = {0};
	int i, j, n,ch;
	
	printf("Please input a string:");
	gets(arr);
	
	n = strlen(arr);
	i = 0;
	j = n - 1;
	while(i < j){
		ch = arr[i];
		arr[i] = arr[j];
		arr[j] = ch;
		i++;
		j--;
	}

	puts(arr);
	return 0;
}
