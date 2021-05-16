#include<stdio.h>
int main(){
	int x=70,y=10;
//	y=x++>70?x+y:5;
	y=++x>70?x+y:5;
	printf("x=%d y=%d\n",x,y);
	return 0;
}
