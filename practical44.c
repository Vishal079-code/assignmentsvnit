//program to calculate the amount paid by costumber to the electrical company
#include<stdio.h>
int main()
{
	float  a,bill;
	printf("please enter the units consumed by the costumer :");
	scanf("%f",&a);
	if ( a>600)
	{
		bill=425+(a-600)*1.25;
		printf(" the amount paid by theb costumer as %f units consumed is %f ",a,bill);
	}
	 else if ( a>400)
	{
		bill=230+(a-400)*0.80;
		printf(" the amount paid by theb costumer as %f units consumed is %f ",a,bill);
	}
	 else if ( a>200)
	{
		bill=100+(a-200)*0.65;
		printf(" the amount paid by theb costumer as %f units consumed is %f ",a,bill);
	}
	 else if ( a>0)
	{
		bill=a*0.5;
		printf(" the amount paid by theb costumer as %f units consumed is %f  ",a,bill);
	}
	else 
	{
		printf("sorry you have entered the wrong data so bill cannot be generated");
		
	}
	return 0;

}
