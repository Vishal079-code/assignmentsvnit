//program to calculate the commissiom of the sales representative as per sales  
#include<stdio.h>
int main()
{
	float  n,commission;
	printf("please enter the units consumed by the costumer :");
	scanf("%f",&n);
	if ( n>5000)
	{
		commission=n*0.125;
		printf(" the amount of commission of sales representative as per the sales of %f  is %f ",n,commission);
	}
	 else if ( n>2000)
	{
		commission=185+(n-2000)*0.120;
		printf(" the amount commission of sales representative as per the sales of %f is %f ",n,commission);
	}
	 else if ( n>500)
	{
		commission=35+(n-500)*0.1;
		printf(" the amount commission of sales representative as per the sales of %f is %f ",n,commission);
	}
	 else if ( n>0)
	{
		commission=n*0.05;
		printf(" the amount commission of sales representative as per the sales of %f is %f  ",n,commission);
	}
	else 
	{
		printf("sorry you have entered the wrong data so commission cannot be generated");
		
	}
	return 0;

}
