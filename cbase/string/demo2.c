#include<stdio.h>

int main(){
	
	char fruit[][20] = {"banana", "apple", "strawmerry", "watermelen"};
	int i, j, n, m;

	n = sizeof(fruit) / sizeof(fruit[0]);
	m = sizeof(fruit[0]) / sizeof(char);

	for (i = 0; i < n; i++){
		
		printf("%s\n",fruit[i]);
	}

	return 0;
}
