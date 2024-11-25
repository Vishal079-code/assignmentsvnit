//program to make a function and tofind that the given number is odd and even
#include<stdio.h>
int myfunction(int n){
   int a;
   a=n%2;
   return a;
}
int main()

{
int n,b;
printf("please enter the number :");
scanf("%d",&n);
b=myfunction(n);
if(b==0)
{      
     printf("the given number is even");	
	}	
	else{
		printf("the given number is odd");
	}
}
