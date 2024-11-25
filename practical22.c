//program to print the value of the factorial of the given value
#include<stdio.h>
int main ()
{
	int i=1,a,factorial=1;
	printf("print the value for which we have to find the value of the factorial : ");
	scanf("%d",&a);
	
	while (i<a)
	{
	factorial=factorial*i;
	i++;
	}
	printf("the value of the factorial is %d",factorial);
	return 0;
}
