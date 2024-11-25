//reading a array of 10 numbers and count positive ,negative and zero elements
#include<stdio.h>
int main()
{
	int array[10],i,p=0,n=0,z=0;
	for(i=0;i<10;i++)
	{
		printf("enter the number to find positive ,negative and zero  numbers :");
		scanf("%d",&array[i]);
		if(array[i]>0)
		p++;	
		else if(array[i]<0)
		n++;
		else
		z++;	
		
		}
	printf("the total number of positive numbers is %d",p);
		printf("\nthe total number of negative numbers is %d",n);
		printf("\nthe total number of zero numbers is %d",z);
}
