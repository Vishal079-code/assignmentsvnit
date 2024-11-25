//program to print the single digit showing the sum of the n digits of a given number
#include<stdio.h>
int main()

{ int sum=0,n,r,i,a;
 printf("please enter the number of digit you are going to print:");
 scanf("%d",&n);
  while(n>9)
  {
  sum=0;
  while(n>0)
 {
 	r=n%10;
 	n=n/10;
 	sum=sum+r;
 }
 n=sum;
}
 
 printf("the sum of the given numbers individual no. is %d",sum);
	
}
