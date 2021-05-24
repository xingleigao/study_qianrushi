#include<stdio.h>

int main(){
	int a[2][3] = {{1, 4, 6}, {12, 9, 7}};
	int * p[2] = {a[0], a[1]};
	int i, j, sum = 0;

	//printf("%p %p\n",p[0], p[1]);
	printf("total=%d\n",sizeof(p));
	for(i = 0; i <2; i++){
		for( j = 0; j < 3; j++)
			sum += *(p[i]+j);
			//printf("%d %d ",*(a[i]+j), *(p[i]+j));
		//puts("");
	}
	printf("sum=%d\n",sum);

	return 0;
}
