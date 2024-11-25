//program to print the odd numbers upto to n 
#include<stdio.h>
int main()
{
	int i,n;
	printf("please enter the value of n  to get the odd numbers upto n :");
	scanf("%d",&n);
	for( i=1;i<n;i=i+2)
	{
		printf("%d ",i);
	}
	return 0;
}
