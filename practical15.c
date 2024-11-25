#include<stdio.h>
int main()
{
	int a,b,c,d,e,sum;
	printf("please neter the marks of subject a out of 100 =");
	scanf("%d",&a);
	printf("please neter the marks of subject b out of 100=");
	scanf("%d",&b);
	printf("please neter the marks of subject c out of 100 =");
	scanf("%d",&c);
	printf("please neter the marks of subject d out of 100 =");
	scanf("%d",&d);
	printf("please neter the marks of subject e out of 100 =");
	scanf("%d",&e);
	sum=a+b+c+d+e;
	if (sum>400)
	{
		printf("you are in division a");
	}
	else if(sum>300)
	{
		printf("you are in division b");}
		
	else if(sum>250)
	{
		printf("you are in division c");
		
	}
	else
	{
		printf("you are in division d");
	}
	
	
	
}
