#include <stdio.h>

int main(){
	int a[6],i;

	for(i=0;i<6;++i)
		printf("%p\n",&a[i]);

	return 0;
}
