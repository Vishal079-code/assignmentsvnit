//rotate an array by n  positions 
#include<stdio.h>
int main()
{
	int i,n,a;
	printf("enter the size of the array:");
	scanf("%d",&a);
	int array[a],rotate[a];
	printf("please enter the value of n for rotating the array:");
	scanf("%d",&n);
	n=n%a;
	for(i=0;i<a;i++)
	{
		printf("enter the array[%d]:",i);
		scanf("%d",&array[i]);
	}
	for(i=0;i<=a;i++){
		
	 rotate[i]=array[(i+n)%a];
	 }
	
	
	
printf("the rotated array is as follows:");

for(i=0;i<a;i++){
	printf("%d,",rotate[i]);
}
	{
	}
	
}
