//program to write factors of a given no.
#include<stdio.h>
int main()
{
	int a,i=1;
	printf(" please enter the postive numbers for finding the factors of it :");
	scanf("%d",&a);
	printf("the factors of the %d are :",a);
	while (i<=a)
	{
		
		if (a%i==0)
		{
			printf(" %d "  ,i);
			
		}
		i++;
	}
	return 0;
}
