//program to find the reverse of the given number.
#include<stdio.h>
int main()

{ int reverse=0,n,r,i;
 printf("please enter the number to find the reverse of the entered number :");
 scanf("%d",&n);
 while(n>0)
 {
 	r=n%10;
 	n=n/10;
 	reverse=reverse*10+r;
 }
 
  printf("the value of the reverse string is %d",reverse);
	
}
