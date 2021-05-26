#include<stdio.h>

int main()
{
	int m = 10;
	int n = 20;
	const int *p;
	int * const q;
	const int * const r;

	p = &m;//right
	//(*p)++;; error
	//q = &m; error
	
	m++;

	return 0:
}
