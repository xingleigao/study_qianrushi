#include<stdio.h>
int main(){
	int a = 254;
	char ch = 'A';
	char s[] = "dsfsdf";
	float f1 = 567.89;
	printf("%d %o %x\n", a, a, a);
	printf("%c %d\n", ch, ch);
	printf("%s\n", s);
	printf("%f %e %g\n", f1, f1, f1);
	return 0;
}
