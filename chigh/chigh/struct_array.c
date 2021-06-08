#include<stdio.h>

#define N 20
struct student{
	int no;
	char name[N];
	float score;
}s2[5];

int main(int argc, const char *argv[])
{
	struct student s1[] = {{1, "s1", 90},{2, "s2", 88},{3, "s3",99}};
	//printf("%d.%s.%f\n",s1[0].no,s1[0].name,s1[0].score);
	s2[0] = s1[0];
	s2[1] = s1[1];
	s2[2] = s1[2];

	for(int i = 0; i < sizeof(s1)/sizeof(struct student); i++)
		printf("%d %s %f\n",s1[i].no,s1[i].name,s1[i].score);	

	return 0;
}
