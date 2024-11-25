//program to find the occurance of the number in the array
#include<stdio.h>
int main()
{
	int i,n,b=0,a,c=0;
	printf("please enter the size of array:");
	scanf("%d",&n);
	int array[n];
	for(i=0;i<n;i++)
	{
		printf("please enter the element:");
		scanf("%d",&array[i]);
	}
	printf("please enter the number you want to find the occurance:");
	scanf("%d",&a);
	for(i=0;i<n;i++){
		if(array[i]==a){
			
			c++;
			b++;
		}
		
	}
if(c!=0){
	printf("yes the given element is occured %d times in the array",c);
}
if(b==0)
{
	printf("sorry the given element is not found in the array or in the other words occorance is o times");
}
}
