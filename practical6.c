//swaping the values without using third variable
#include<stdio.h>
int main()
{
	int a,b;
	a=50;
	b=60;
	printf("the value of a is %d\n",a);
	printf("the value of b is %d\n",b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("after swaping the values\n");
	printf("the value of a is %d\n",a);
	printf("the value of b is %d",b);
	return 0;
	
}

