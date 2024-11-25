//program to check whether the no. is pilindrom or not
#include<stdio.h>
int main()

{ int reverse=0,n,r,i;
 printf("please enter the number to check it is pilindrom or not :");
 scanf("%d",&n);
 n=i;
 while(n>0)
 {
 	r=n%10;
 	n=n/10;
 	reverse=reverse*10+r;
 }
 
  if (i==reverse)
  {
  	printf(" yes the given number is pilindrom");
  }
  else 
 {
  	printf(" no  the given number is not a pilindrom");
  }
	return 0;
}
