#include<stdio.h>
int main(){
	int x = 1, y = 0, z = 0;
	if(x++ && y++ || ++z)
		printf("true:%d %d %d", x, y, z);
	else printf("false:%d %d %d", x, y, z);
	return 0;	
}
