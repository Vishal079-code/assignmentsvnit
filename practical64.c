//program to read the matrix and find the sum of the rows
#include<stdio.h>
int main()
{ 
int i,j,array[3][3],sum1=0,sum2=0,sum3=0,totalsum;
 
      for(i=0;i<3;i++)
	  {
	  	for(j=0;j<3;j++)
	  	{ 
	  		printf("enter the a%d%d :",i+1,j+1);
	  		scanf("%d",&array[i][j]);
	  		
		  }
	} 
	for(i=0;i<3;i++){
	
		  sum1=sum1+array[0][i];
	  		sum2=sum2+array[1][i];
	  		sum3=sum3+array[2][i];
		  
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
	totalsum=sum1+sum2+sum3;
	printf("\n the sum of the row 1 elements of the matrix is  : %d ",sum1);
	printf("\n the sum of the row 2 elements of the matrix is  : %d ",sum2);
	printf("\n the sum of the row 3 elements of the matrix is  : %d ",sum3);
	printf("\n the sum of the all elements of the matrix is : %d ",totalsum);
		
return 0;

}
	
