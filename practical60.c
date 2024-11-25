//program to sort the inputs of array by using selection sort method
#include<stdio.h>
int main()
{
	int n,i,min,swap,index,storeindex,j;
	printf("please enter the number of inputs you are going to enter :");
	scanf("%d",&n);
	int array[n];
	for(i=0;i<n;i++)
	
	{
		printf("enter the number array[%d]:",i+1);
		scanf("%d",&array[i]);
	}
	for(i=0;i<n-1;i++)
	{
		index=i;
		min=array[index];
		storeindex=i;
		for(j=i+1;j<n;j++)
		{
			
			
				if(array[j]<min){
					min=array[j];
					storeindex=j;
				}
			
		}
		if(storeindex!=i)
		{
		
		swap=array[storeindex];
		array[storeindex]=array[i];
		array[i]=swap;
	}
	}
	printf("the array after sorting is :\n");
	for(i=0;i<n;i++)
	{
		printf("%d,",array[i]);
		
	}
	return 0;
	
	
	
	
	
	
	
	
	
	
	
	
	}
