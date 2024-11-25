//program to print the pattern like christmas tree
#include<stdio.h>
int main()
{
	int i,j,n,k;
	printf("please enter upto which you have to print the number :");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n");
		for(k=n;k>i/2;k--)
		{
			printf(" ");
		}
		
			
	for(j=0;j<=i;j++)
	{
	printf("*")	;
		}	
}
 return 0;	
}
