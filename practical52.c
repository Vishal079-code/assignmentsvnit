//program  to print the pattern 1,121,12321...........etc
#include<stdio.h>
int main()
{
	int i,j,k,n;
	printf("please enter the number upto which you have to print the pattern:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		printf("\n");
		for(k=n;k>(i+1)/2;k--)
		{
			printf(" ");
		}
		
		for(j=0;j<=i;j++)
		{
			printf("%d",j+1);
		}for(j=i-1;j>=0;j--)
		{
			printf("%d",j+1);
		}
		
	}
	
}
