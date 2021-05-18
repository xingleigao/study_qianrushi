#include <stdio.h>

int main(){
	int i = 6, a[i];

	for(i=0;i<6;++i)
		printf("%p\n",&a[i]);

	printf("%p\n",a);
	printf("%ld\n",sizeof(a));
	return 0;
}
