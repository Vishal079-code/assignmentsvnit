//program to print the pattern like christmas tree and reverse too pattern
#include<stdio.h>
int main()
{
	int i,j,n,k,x,y;
	printf("please enter upto which you have to print the number :");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n");
		for(k=n;k>i;k--)
		{
			printf(" ");
		}
		
		for(j=0;j<=i*2;j++)
	   {
	printf("*")	;
		}
	}
   for(i=0;i<n;i++)
	{
		printf("\n");
	for(k=0;k<=i;k++)
		{
		//	if(k==n/2)
		//	printf(" ");
			printf(" ");
		}
		
		for(j=n+1;j>=i*2;j--)
	   {
	   	
	printf("*")	;
		}
		/**for(k=0;k>i/2;k++)
		{
			printf(" ");
		}*/
}

 return 0;
}

