#include<stdio.h>
#include<string.h>

#define N 20

struct brithday{
	int year;
	int month;
	int day;
};
struct student{
//struct{
	int no;
	char name[N];
	struct brithday date;
	float score;
}s3 = { 3, "s3", {1997, 5, 4}, 90}, s4 = {40, "s4", {1996, 5, 4}, 94};

int main(int argc,const char *argv[]){

	struct student s1, s2;
	
	s1.no = 1;
	strcpy(s1.name,"s1");
	s1.score = 90;
	s1.date.year = 1993;
	s1.date.month = 5;
	s1.date.day = 4;

	printf("%d %s %d %d %d %.2f\n", s1.no, s1.name, s1.date.year, s1.date.month,s1.date.day, s1.score);
	
	s2 = s1;
	s2.no = 2;
	printf("%d %s %.2f\n", s2.no, s2.name, s2.score);
	printf("%d %s %.2f\n", s3.no, s3.name, s3.score);
	printf("%d %s %.2f\n", s4.no, s4.name, s4.score);


	return 0;
}
