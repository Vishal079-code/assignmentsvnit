//program to find the value of variable function y in different values of x and n
#include<stdio.h>
int main()
{
	float x,n;
	printf("please enter the values of n ");
	scanf("%f",&n);
	printf("please enter the values of x ");
	scanf("%f",&x);
	if (n==1)
	{
		printf("the value of the y for the function 1+x id %f",1+x);
	}
	else if(n==2)
	{
		printf("the value of the y for the function 1+x/n id %f",1+x/2);
	}
    else if (n==3)
    {
		printf("the value of the y for the function 1+x^n id %f",1+x*x*x);
	}
	else
	{
		printf("the value of the y for the function 1+nx id %f",1+n*x);
	}
	return 0;
}
