//finding the square and cube of the entered number using pointers of the variable containing the entered number
#include<stdio.h>
int square(int*p)
{
	 int a=*p;
	 return a*a;
}
int cube(int *p)
{
	int a=*p;
	return a*a*a;
}
int main(){
	int n;
	printf("please enter the number to find cube and square of it:");
	scanf("%d",&n);
	printf("\n the square of the number %d is : %d",n,square(&n));
	printf("\n the cube of the number %d is : %d",n,cube(&n));
	return 0;
	
}
