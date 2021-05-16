#include<stdio.h>
int main(){
	char arr[]={"abc"};
	char arr2[]={'a','b','c','\0'};
	printf("%ld %ld\n",sizeof(arr),sizeof(arr2));
       	printf("%s %s\n",arr,arr2);	
	return 0;
}
