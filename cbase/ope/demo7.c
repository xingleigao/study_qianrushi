#include<stdio.h>
int main(){
	float x = 10.5, y = 1.8,z;
	z = (x += 5, y++, x + y);
	printf("x=%f y=%f z=%f\n", x, y, z); 

	return 0;
}
