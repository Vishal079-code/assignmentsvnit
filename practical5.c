//program to swap two variables using third variable
#include<stdio.h>
int main()
{
	int a,b,c;
	a=12;
	b=15;
	printf("the value of a is %d\n",a);
	printf("the value of b is %d\n",b);
	c=12;
	b=c;
	a=15;
	printf("after swaping the values\n");
	printf("the value of a is %d\n",a);
	printf("the value of b is %d",b);
	return 0;
	
}

