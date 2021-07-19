#include "linklist.h"

int main(int argc,const char *argv[])
{
	linklist H,p;
	int n;

	//H = list_create2();
	H = list_create();	
	list_head_insert(H, 10);
	list_head_insert(H, 20);
	list_head_insert(H, 30);
	list_head_insert(H, 40);

	list_show(H);		
#if 0
	printf("please input pos:");
	scanf("%d",&n);
	if((p = list_get(H,n))!=NULL){
		printf("node data:%d\n",p->data);
	}
#endif
	printf("please input a value:");
	scanf("%d",&n);
	if((p = list_locate(H, n))!=NULL){
		printf("found:%d\n", p->data);
	}
	return 0;
}
