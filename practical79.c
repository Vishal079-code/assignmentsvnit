//create a function to interchange the values of two variables
#include<stdio.h>
int interchange(int x,int y,int z)
{
	if (z==1){
		return y;
	}
	else{
	return x;
	}

}
int main()
{
	int x,y,a,b;
	printf("please enter the value of x :");
	scanf("%d",&x);
    printf("please enter the value of y :");
	scanf("%d",&y);
	printf("the value of x is %d .\n the value of y is %d.",x,y);
	a=x;b=y;
	x=interchange(a,b,1);
	y=interchange(a,b,2);
	printf("\n after changing the values\n");
	printf("the value of x is %d .\n the value of y is %d.",x,y);

}
