//program to read the matrix and findout max and min
#include<stdio.h>
int main()
{ 
int i,j,array[3][3],max,min;
 
      for(i=0;i<3;i++)
	  {
	  	for(j=0;j<3;j++)
	  	{ 
	  		printf("enter the a%d%d :",i+1,j+1);
	  		scanf("%d",&array[i][j]);
	  		if (i == 0 && j == 0)
			   {
                max = array[i][j];
                min = array[i][j];
            }
	  		if(array[i][j]>max)
	  		{
			  max=array[i][j];
			  }
			  if (array[i][j]<=min)
			  {
			   min=array[i][j];
			  }
		  }
		  
}
printf("the matrix is /n");
for(i=0;i<3;i++)
	  { printf("\n[ ");
	  for(j=0;j<3;j++)
	  	{ 
	  		printf("%d ",array[i][j]);
	  		
		  }
		  printf("]");
	}
	printf("\n the maximum value among the elements of the matrix is %d :",max);
		printf("\n the minimum value among the elements of the matrix is %d :",min);

return 0;

}
	
