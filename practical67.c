//program to read  two the matrix and store  their subtraction value into a new third matrix
#include<stdio.h>
int main()
{ 
int i,j,array1[3][3],array2[3][3],array3[3][3];
 
      for(i=0;i<3;i++)
	  {
	  	for(j=0;j<3;j++)
	  	{ 
	  		printf("enter the a%d%d :",i+1,j+1);
	  		scanf("%d",&array1[i][j]);
	  		
		  }
	} 
printf("the matrix 1 is ");
for(i=0;i<3;i++)
	  { printf("\n[ ");
	  for(j=0;j<3;j++)
	  	{ 
	  		printf("%d ",array1[i][j]);
	  		
		  }
		  printf("]");
		  
	}
	 printf("\n");for(i=0;i<3;i++)
	  {
	  	for(j=0;j<3;j++)
	  	{ 
	  		printf("enter the a%d%d :",i+1,j+1);
	  		scanf("%d",&array2[i][j]);
	  		
		  }
	} 
printf("\nthe matrix2 is ");
for(i=0;i<3;i++)
	  { printf("\n[ ");
	  for(j=0;j<3;j++)
	  	{ 
	  		printf("%d ",array2[i][j]);
	  		
		  }
		  printf("]");
	}
	for(i=0;i<3;i++)
	  {
	  	for(j=0;j<3;j++)
	  	{ 
	  		array3[i][j] = array1[i][j] - array2[i][j];
	  		
		  }
	} 
printf("\nthe matrix3 is ");
for(i=0;i<3;i++)
	  { printf("\n[ ");
	  for(j=0;j<3;j++)
	  	{ 
	  		printf("%d ",array3[i][j]);
	  		
		  }
		  printf("]");
	}
return 0;

}
	
