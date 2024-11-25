//program to find  max and min from the n numbers data
#include<stdio.h>
int main()
{
	int max=0,min=999999999;
	int n;
	    printf("\n please start  entering the numbers (press 0 to exit)"); 
		printf(" \n  note that  first entered number will not be considered in finding max and min:");
		scanf("%d",&n);
	while (n!=0&&n<999999999&&n!=999999999)
	{
		printf("\n please enter the number(press 0 to exit):");
		scanf("%d",&n);
		if(n>max)
		{ 
		
		max=n;
		}
		 if(n<min&&n!=0)
		{  
		min=n;
		}		
}
if (n>=999999999){
	printf("sorry wrong value entered please restart the process and do not enter the value more than or equal to 999999999");
}
  else {
       printf("\n the max number among n numbers  is %d",max);
        printf("\n the min number among n numbers  is %d",min);
}
		
	return 0;
}
