//program to print sum of all odd and even no, between 1to n
#include<stdio.h>
int main()
{
	int i,j,n,sumeven=0,sumodd =0;
	printf("please enter the value of n :");
	scanf("%d",&n);

	for (i=0;i<n;i=i+2)
	{ sumeven=sumeven+i;
	 }
		for (j=1;j<n;j=j+2)
	{ sumodd=sumodd+j;
}
printf("\nthe sum of all even numbers between 1 to %d is %d",n,sumeven);
printf("\nthe sum of all odd numbers between 1 to %d is %d",n,sumodd);
}
