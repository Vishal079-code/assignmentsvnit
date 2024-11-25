//program to print the even numbers upto to n 
#include<stdio.h>
int main()
{
	int i,n;
	printf("please enter the value of n to get the list of even numbers between 0 to n:");
	scanf("%d",&n);
	printf(" the even numbers between 0 to %d is ",n );
	for( i=0;i<n;i=i+2)
	{
		printf("%d ",i);
	}
	return 0;
}
