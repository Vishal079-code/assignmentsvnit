//program to read the matrix and transpose matrix
#include<stdio.h>
int main()
{ 
int i,j,matrix[3][3],transpose[3][3];
 
      for(i=0;i<3;i++)
	  {
	  	for(j=0;j<3;j++)
	  	{ 
	  		printf("enter the a%d%d :",i+1,j+1);
	  		scanf("%d",&matrix[i][j]);
	  		
		  }
	} 
	for(i=0;i<3;i++){
	for(j=0;j<3;j++){
	
		  transpose[i][j]=matrix[j][i];
}
}

printf("the  transpose matrix is /n");
for(i=0;i<3;i++)
	  { printf("\n[ ");
	  for(j=0;j<3;j++)
	  	{ 
	  		printf("%d ",transpose[i][j]);
	  		
		  }
		  printf("]");
	}
	
return 0;

}
	
