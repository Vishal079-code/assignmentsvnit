//program to do the linear search about the elements of the array
#include<stdio.h>
int main()
{
	int i,n,b=0,a,c=0,index;
	printf("please enter the size of array:");
	scanf("%d",&n);
	int array[n];
	for(i=0;i<n;i++)
	{
		printf("please enter the element:");
		scanf("%d",&array[i]);
	}
	printf("please enter the number you want to search:");
	scanf("%d",&a);
	for(i=0;i<n;i++){
		if(array[i]==a){
			index=i;
			c++;
			b++;
		}
		
	}
if(c!=0){
	printf("yes the given element is found in the array at %d position:",index+1);
}
if(b==0)
{
	printf("sorry the given element is not found in the array");
}
}
