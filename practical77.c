//write a program to create a function and check that the number is pilidrom or not
#include<stdio.h>
int pilindrom(int n){
	int r,reverse;
	while(n>0)
	{
		r=n%10;
		n=n/10;
		reverse=reverse*10+r;
	}
	return reverse;
}
int main()
{
	int n,a;
	printf("please enter the number to check that the number is plindrom or not:");
	scanf("%d",&n);
	a=pilindrom(n);
	if(a==n){
		printf("yes the given number is the pilindrom");
	}
	else
	{
		printf("the given number is not the pilindrom");
	}
}
