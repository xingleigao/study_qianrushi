#include<stdio.h>
#include<string.h>

#define N 30
int main(){
	
	char src[] = "makeru";
	char dest[N];
	
	//strcpy(dest, src);
	
	int i = 0,n = strlen(src);

	while ( i <= n){
		dest[i] = src[i];
		i++;
	}

	puts(src);
	puts(dest);

	return 0;
}

