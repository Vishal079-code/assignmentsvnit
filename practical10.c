//progarm to calculate cutoff marks of the student
#include<stdio.h>
int main()
{
	float m,cm,p,c,e;
	printf("please enter the marks of physics out of 200 =");
	scanf("%f",&p);
	printf("please enter the marks of chemistry out of 200 =");
	scanf("%f",&c);
	printf("please enter the marks of  maths out of 200  =");
	scanf("%f",&m);
	printf("please enter the marks of enterance exam out of 100 =");
	scanf("%f",&e);
	cm=(m+p+c)/2+e;
	printf("the cutoff marks of the student is =%f",cm);
	return 0;
	
}
