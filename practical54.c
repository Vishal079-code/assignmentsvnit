//reading a array of 10 numbers and print the sum of numbers
#include<stdio.h>
int main()
{
	int array[10],i,sum=0;
	for(i=0;i<10;i++)
	{
		printf("enter the number :");
		scanf("%d",&array[i]);
		sum=sum+array[i];
	}
	printf("the sum of the all the numbers of the array is %d",sum);
}
