#include<stdio.h>

#define N 20
struct student{
	int no;
	char name[N];
	float score;
};

void print_into(struct student *p,int n){
	for(int i = 0; i < n; i++){
		//printf("%d %s %f\n",s1[i].no,s1[i].name,s1[i].score);	
		//printf("----%d-%s-%f----\n",p->no,p->name,(*p).score);
		//p++;
		//printf("----%d-%s-%f----\n",p[i].no,p[i].name,p[i].score);
		printf("----%d-%s-%f----\n",(p+i)->no,(p+i)->name,(p+i)->score);
	}
}

int main(int argc, const char *argv[])
{
	struct student s1[] = {{1, "s1", 90},{2, "s2", 88},{3, "s3",99}};
	
	print_into(s1,sizeof(s1)/sizeof(s1[0]));

	return 0;
}
