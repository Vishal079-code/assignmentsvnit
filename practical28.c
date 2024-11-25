//proram to check whether the 3 digit number is armstrong or not 
#include<stdio.h>
 int main()
 {
 	int n,r,sum=0,a;
 	printf("please enter the three digit number to check whether it is armstrong or not :");
 	scanf("%d",&n);
 a=n;
 	while(n>0)
 	{
 		r=n%10;
 		sum=r*r*r*1 +sum;
 		n=n/10;
	 }
	 if (a==sum)
	 {
	 	printf("the number is the armstrong");
	 }
	else
	   {
	 	printf("the number is not  the armstrong");
	 }
 	return 0;
 }
