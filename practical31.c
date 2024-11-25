//program to find the sum of the individual digits of the number entered
#include<stdio.h>
int main()

{ int sum=0,n,r,i;
 printf("please enter the number to find the sum of the individual numbers:");
 scanf("%d",&n);
 while(n>0)
 {
 	r=n%10;
 	n=n/10;
 	sum=sum+r;
 }
 printf("the sum of the given numbers individual no. is %d",sum);
	
}
