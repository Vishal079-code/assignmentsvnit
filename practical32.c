//program to find first max and second max from the n numbers data
#include<stdio.h>
int main()
{
	int firstmax=0,secondmax=0;
	int n;
	    printf("\n please enter the number(press 0 to exit) but please note that this number will not be considered in finding  second max and 1st max:");
		scanf("%d",&n);
	while (n!=0)
	{
		printf("\n please enter the number(press 0 to exit):");
		scanf("%d",&n);
		if(n>firstmax)
		{
		secondmax=firstmax;
		firstmax=n;
		}
		else if(n>secondmax)
		{ secondmax=n;
		}
		
		
}
        printf("\nthe firstmax is %d",firstmax);
        printf("\n the secondmax is %d",secondmax);
		
	return 0;
}
