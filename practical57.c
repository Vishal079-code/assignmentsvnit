//program to read the numbers and then find the max and second max
#include<stdio.h>
int main()
{    int n,i,firstmax,secondmax;
     printf("please enter the number upto which you have to write the number :");
     scanf("%d",&n);
     int array[n];
	  for(i=0;i<n;i++)
	  {
	  	printf("enter the number :");
	  	scanf("%d",&array[i]);
	  }
	  
	  for(i=0;i<n;i++)
	  {
	  	if(array[i]>firstmax)
	  	{
	  		secondmax=firstmax;
	  		firstmax=array[i];
	  		
		  }
		  else{
		  	secondmax=array[i];
		  }
	  }
	  
	  printf("the value of the firstmax is %d :",firstmax);
	  printf("the value of the secondmax is %d :",secondmax);
	  
	
}

