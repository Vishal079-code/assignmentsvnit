//program to find max value of the amog the three numbers using conditional operator
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
	
	 (a>b)?(a>c)?printf("%d",a):printf("%d",c) :(b>c)?printf("%d",b):printf("%d",c);
	return 0;
	
	
}

