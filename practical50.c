//program to print pattern of a,bb,ccc,dddd,eeeee etc
#include<stdio.h>
int main()
{
	int i,j,n,z=65;
	printf("please enter the number upto which you have to print the pattern:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{   
	    
		for(j=0;j<=i;j++)
		{
			printf("%c",z);
			
		}
		z++;
		
		printf("\n");
	}
	return 0;
}
