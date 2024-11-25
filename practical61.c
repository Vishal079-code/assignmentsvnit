//program to sort the elements of the array by using the method of bubble sort
#include<stdio.h>
int main()
{
	int i,n,a,swap,j;
	printf("please enter the no. of inputs you are going to enter into the program:");
	scanf("%d",&n);
	int array[n];
for(i=0;i<n;i++)
	{
		printf("enter the number:");
		scanf("%d",&array[i]);		
	}
	for(i=0;i<n;i++)
	{
	
	for(j=0;j<n;j++)
		 {
			if(array[j]>array[j+1])
			{
			swap=array[j+1];
			array[j+1]=array[j];
			array[j]=swap;
			}
		}
	}
	printf("\nthe array after sorting is:");
	for(i=0;i<n;i++)
	{
		printf("%d,",array[i]);
	}
	
 } 
