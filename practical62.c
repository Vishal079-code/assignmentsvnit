//program to reverse an array
#include<stdio.h>
int main()
{
	int n,i;
	printf("please enter the number of the inputs you are going do:");
	scanf("%d",&n);
	int array[n],reverse[n];
	for(i=0;i<n;i++)
	{
	printf("enter the input:");
	scanf("%d",&array[i]);
	}
	printf("display of the array before reverse :");
	for(i=0;i<n;i++)
	{
		printf("%d,",array[i]);
	     reverse[i]=array[n-1-i];
	 }
	 	printf("\ndisplay of the array after reverse :");
	 	for(i=0;i<n;i++)
	{
		printf("%d,",reverse[i]);
	 }
}
	 
	 	
	


