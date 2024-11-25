//program to read two numbers and finding teh power 
#include<stdio.h>
int main ()
{
	int a,b,power=1,i=0;
	printf("please enetr the value of the  a to find a^b :");
	scanf("%d",&a);
	printf("please enetr the value of the  b  to find a^b:");
	scanf("%d",&b);
	while (i<b )
	{
		power=power*a;
		i++;
		
    }
    printf("the value of the power is %d",power);
	

}
