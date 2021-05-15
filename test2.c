#include<stdio.h>

int main(){
	int m=0;
	for(int i=0;i<11;++i) m+=i;
	printf("%d %s %s %d",m,__FILE__,__FUNCTION__,__LINE__);
	return 0;
}
