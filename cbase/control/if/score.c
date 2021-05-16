#include<stdio.h>
int main(){
	float score;
	printf("please input your score:");
	scanf("%f",&score);
	if(score < 0 || score>100){
		printf("not in [0, 100]\n");
	}
	else{
		if(score >= 90)
			printf("A-excellent\n");
		else {//[...,90]
			if(score >= 70)
				printf("B-good\n");
			else{
				if(score >= 60)
					printf("C-OK\n");
				else
					printf("D-not pass\n");
			}	
		
		}
	}

	return 0;
}
