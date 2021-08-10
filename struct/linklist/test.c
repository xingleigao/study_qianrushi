#include "linklist.h"

int main(int argc,const char *argv[])
{
	//linklist p;
	linklist H;
	int n;
	H = list_create2();
	list_show(H);
	list_sort(H);
	list_show(H);
#if 0
	//H = list_create2();
	H = list_create();	
	list_head_insert(H, 10);
	list_head_insert(H, 20);
	list_head_insert(H, 30);
	list_head_insert(H, 40);
	list_reverse(H);
	list_show(H);
	
	list_order_insert(H, 5);
	list_show(H);	
	list_order_insert(H, 35);
	list_show(H);	
	list_order_insert(H, 95);
	list_show(H);	
	printf("please input pos:");
	scanf("%d",&n);
	if((p = list_get(H,n))!=NULL){
		printf("node data:%d\n",p->data);
	}
	printf("please input a value:");
	scanf("%d",&n);
	if((p = list_locate(H, n))!=NULL){
		printf("found:%d\n", p->data);
	}
	printf("please input pos:");
	scanf("%d",&n);
	if(list_delete(H,n) == -1){
		printf("delete failed\n");
	}

	list_show(H);

#endif
	return 0;
}

