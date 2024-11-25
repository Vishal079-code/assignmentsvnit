//read two array of 10 integers and swap their values
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
	printf("\nthe array 1 is:");
for(i=0;i<10;i++)
{
	printf(",%d",array1[i]);
}
printf("\nthe array 2 is:");
	for(i=0;i<10;i++)
	{
		printf("%d,",array2[i]);
	}

	for(i=0;i<10;i++)
	{
		array3[i]=array2[i];
		array2[i]=array1[i];
		array1[i]=array3[i];
}
         printf("\n after swapping the values");
         printf("\nthe array 1 is:");
         for(i=0;i<10;i++)
{
	printf("%d,",array1[i]);
}
printf("\nthe array 2 is:");
	for(i=0;i<10;i++)
	{
		printf("%d,",array2[i]);
	}
  
    
        
	
	return 0;
		
}
