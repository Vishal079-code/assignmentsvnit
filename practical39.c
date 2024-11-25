//program to find the sum of the number/number factorial upto n numbers
#include<stdio.h>
int main()
{
	float  a,factorial=1,n,sum=0;
	printf("please enter the value of the n to get the sum of number/number factorial upto n values :");
	scanf("%f",&n);
	printf("the required series of addition upto %f number :",n);
	while( a<=n)
	{
		a++;
		factorial=factorial*a;
		sum=sum+a/factorial;
		printf("%f /%f +",a,factorial);
	}
	printf("\n the final value of this addition is %f",sum);
	
}
