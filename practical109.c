//cahnging the value of the variable using pointer
#include<stdio.h>
int main()
{
	int a;
	printf("write the value of a :");
	scanf("%d",&a);
	int*x=&a;
	 *x=50;
	 
	 printf("the value of a is now changed is :%d ",a);
}
