#include<stdio.h>
#include<stdlib.h>
#include "seqlist.h"
int main(int argc, const char *argv[])
{
	int i = 0;
	seqlist_t *L = NULL;
	L = create_seqlist();
	for(i = 0; i <= 4; i++)
		insert_seqlist(L,i,0);
	show_seqlist(L);
	clear_seqlist(L);
	return 0;
}
