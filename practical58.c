//read two array of 10 integers and store the sum of the numbers into the third array
#include<stdio.h>
int main()
{
	int i,array1[10],array2[10],array3[10];
	for(i=0;i<10;i++)
	{
		printf("please enter the value of the array1 :");
		scanf("%d",&array1[i]);
		
	}
	for(i=0;i<10;i++)
	{
		printf("please enter the value of the array2 :");
		scanf("%d",&array2[i]);
		
	}
	for(i=0;i<10;i++)
	{
		array3[i]=array1[i]+array2[i];
		printf("\narray3[%d]:",i);
		printf("%d",array3[i]);
	}
	
		
}
