//program to find the given no. is a prime no. or composite number
#include<stdio.h>
int main()
{
	int  a,i=i,b=0;
	printf("please enter the value of a:");
	scanf("%d",&a);
	while (i<=a)
	{
++i;
	if(a%i==0)
	{
		b++;
			
    }
 }
	if (a==2)
    {
    	printf("the 2 is prime  no.");
    
	}
	 
   else if (b==2)
	{
		printf("the given no. is a  prime number");
		
	}
	else 
	{
		printf("the given no. is composite number");
		
	}	
	return 0;
}
