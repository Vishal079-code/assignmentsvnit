#include<stdio.h>
int main()
{
	int i,j,k,a,b,c;
	printf("please enter the parameter 1 of the three dimensional array :");
	scanf("%d",&i);
	printf("please enter the parameter 2 of the three dimensional array :");
	scanf("%d",&j);
	printf("please enter the parameter 3 of the three dimensional array :");
	scanf("%d",&k);
	int array[i][j][k];
	for(a=0;a<i;a++)
	{
		for(b=0;b<j;b++)
		{
			for(c=0;c<k;c++)
			{
				printf("please enter the a[%d][%d][%d] :",a+1,b+1,c+1);
				scanf("%d",&array[a][b][c]);
				
			}
		}
	}

for(a=0;a<i;a++)
	{    printf("\n{");
		for(b=0;b<j;b++)
		{     printf("{");
			for(c=0;c<k;c++)
			{
				
				printf("%d ,",array[a][b][c]);
				
			}
			printf("}");
		}
			printf("}");
	}
}

