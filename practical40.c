//program to read the no. upto the negative no. entered and then print the value of the sum of the all read numbers
#include<stdio.h>
int main()
{
	int sum=0,n;
	
	while ( n>=0)
	{
	printf("\n please enter the value of number to find the sum:");
	scanf("%d",&n);
	sum =sum+n;
	}
	sum=sum +n*-1;
	printf("the sum of all the positive numbers is %d",sum);
	return 0;
}
