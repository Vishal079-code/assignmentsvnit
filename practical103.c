//defining the macro to find the maximum of two numbers
#include<stdio.h>
#define MAX(a, b) ( (a>b)?a:b)
int main()
{
	printf("enter the a :");
	int a,b;
	scanf("%d",&a);
	printf("enter the b:");
	scanf("%d",&b);
	printf("the max among the 2  numbers is %d",MAX(a,b));
}

