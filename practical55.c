//reading a array of 10 numbers and count total no.of odd and even numbers
#include<stdio.h>
int main()
{
	int array[10],i,odd=0,even=0;
	for(i=0;i<10;i++)
	{
		printf("enter the number to find even and odd numbers :");
		scanf("%d",&array[i]);
		if(array[i]%2==0)
		{
		even++;	
		}
		else
		{
			odd++;
		}
		}
	printf("the total number of odd numbers is %d",odd);
		printf("\nthe total number of even numbers is %d",even);
}
