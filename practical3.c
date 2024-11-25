#include<stdio.h>
int main()
{
	int gross,main,hra,incometax,tra;
	main=250000;
	hra=10000;//hra=home rent allowance
	tra=2000;//tra=travel rent allowance
	incometax=2500;
	gross=hra+tra+main;//income tax has no role in gross salary
	printf("the gross salary of the employee with main salary %d",main);
	printf("with home rent allowance %d " ,hra);
	printf(" with travelrent allowance %d",tra);
	printf("is %d",gross);
	return 0;
	
	
}
