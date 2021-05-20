#include<stdio.h>
#include<string.h>

#define N 100
int main(){
	
	char dest[] = "www.makeru";
	char src[N] = ".com.cn";
	
	strcat(dest, src);
	

	puts(src);
	puts(dest);

	return 0;
}

