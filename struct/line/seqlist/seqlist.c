#include<stdio.h>
#include<stdlib.h>
#include "seqlist.h"

seqlist_t *create_seqlist(void)
{
	seqlist_t *L=NULL;
	L = (seqlist_t *)malloc(sizeof(seqlist_t));
	if(L == NULL){
		puts("no memory");
		return NULL;
	}
	L->last = -1;
	return L;
}
void clear_seqlist(seqlist_t *L)
{
	if(L == NULL)
	{
		puts("seqlist_t *L is NULL");
		return ;
	}
	free(L);
	return ;
}

int is_empty_seqlist(seqlist_t *L);
int is_full_seqlist(seqlist_t *L);
void set_empty_seqlist(seqlist_t *L);
int get_length_seqlist(seqlist_t *L);
void show_seqlist(seqlist_t *L);

int insert_seqlist(seqlist *L,data_t x,int pos)
{
	if(L == NULL)
	{
		puts("L"
	}
}
int delete_seqlist(seqlist *L,int pos);
int change_seqlist(seqlist *L,data_t x,int pos);
int search_seqlist(seqlist *L,data_t x);
