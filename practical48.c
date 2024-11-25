//program to print pattern of 1,12,123,1234,12345 etc
#include<stdio.h>
int main()
{
	int i,j,n,k;
	printf("please enter the number upto which you have to print the pattern:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{   	
	for(k=n;k>i;k--)
	{
		printf(" ");
	}
	 
		for(j=0;j<=i;j++)
		{
			printf("%d",j+1);
			
		}
		printf("\n");
	}
	return 0;
}
