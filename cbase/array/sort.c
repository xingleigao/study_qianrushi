#include <stdio.h>

int main(){
	int a[] = {3, 4, 17, 8, 31, 2, 9, 15}, n, i ,j;
	int tmp;

	n = sizeof(a)/sizeof(int);
	
	for (i = 0; i < n-1; i++){
		for (j = 0; j < n-i-1; j++){
			if (a[j] < a[j+1]){
				tmp = a[j];
				a[j] = a[j+1];
				a[j+1]=tmp;
			}
		}
	}
	for(i = 0;i < n; ++i)
		printf("%p %d\n",&a[i],a[i]);

	printf("%p\n",a);
	printf("%ld\n",sizeof(a));
	return 0;
}
