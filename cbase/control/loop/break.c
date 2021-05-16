#include<stdio.h>

#define PI 3.14

int main()
{
	int r, area;

	for(r = 1; r <= 10; r++){
		area = PI * r *r;
		if(area > 100)
			break;
		printf("%d %d\n", r, area);
	}
	return 0;
}
