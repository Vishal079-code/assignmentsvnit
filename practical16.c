//program to read three numbers and print max
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("please enter the value of a =");
	scanf("%d",&a);
	printf("please enter the value of b =");
	scanf("%d",&b);
	printf("please enter the value of c =");
	scanf("%d",&c);
	
	if (a>b)
	{
		if(a>c)
		{
			printf("the maximum value among three numbers is %d",a);
		}
		else
		{
			printf("the maximum value among three numbers is %d",c);
		}
	}
	else if (b>a)
	{
		if(b>c)
		{
			printf("the maximum value among three numbers is %d",b);
		}
		else
		{
			printf("the maximum value among three numbers is %d",c);
			
		}
	}
	else
		{
			printf("the maximum value among three numbers is %d",c);
			
		}
	return 0;
	
	
}

