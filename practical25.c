//program to print the table of any no. upto 20 numbers
#include<stdio.h>
 int main()
 {
 	int a,i;
 	printf("please the the value of the number for which you want the value of the table  :");
 	scanf("%d",&a);
 	for(i=1;i<=20;i++)
 	{
 		printf( "\n %d *%d =%d",a,i,a*i );
	 }
	
 }
