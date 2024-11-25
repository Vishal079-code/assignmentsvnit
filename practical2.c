#include<stdio.h>
int main()
{ 
	float a,b,c,d,e,f,g;
	printf("enter the marks of subject out of 100 a=\n");
	scanf("%f",&a);
	printf("enter the marks of subject out of 100  b=\n");
	scanf("%f",&b);
	printf("enter the marks of subject out of 100  c=\n");
	scanf("%f",&c);
	printf("enter the marks of subject out of 100 d=\n");
	scanf("%f",&d);
	printf("enter the marks of subject out of 100 e=\n");
	scanf("%f",&e);
	f=a+b+c+d+e;
	 g=f/5;
	printf("the total marks of the student is  %f\n",f);
	printf("the perentage of the student is %f",g);
	return 0;
}
	
