//program to print the square of  numbers upto to n 
#include<stdio.h>
int main()
{
	int i,n;
	printf("please enter the value of n to get the list of square upto n :");
	scanf("%d",&n);
	printf("the series of the sqaures is ");
	for( i=1;i*i<n;i++)
	{
		printf("%d ",i*i);
	}
	return 0;
}
