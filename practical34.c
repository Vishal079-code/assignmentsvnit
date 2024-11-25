//program to print the fabonaaci series
#include<stdio.h>
int main()
{
	int n,i,t1=0,t2=1,sum=t1+t2;
	printf("please enter the value of n upto which term you want fabonaaci series :");
	scanf("%d",&n);
	printf("  \n the fabonnaci series is as follows:");
    printf("0,1,");
    for(i=1;i<=(n-2);i++)
    {
    	
    	printf("%d ,",sum);
    	t1=t2;
    	t2=sum;
    	sum=t1+t2;
	}
    return 0;
	
	
}

