#include<stdio.h>
int main()
{
	int n,no=7,b=0;
	printf("welcome to guess the number game");
	printf("\n enter 0 to start the game:");
	scanf("%d",&n);
	while(n!=no)
	{
		printf("\nguess the number :");
		scanf("%d",&n);
		
		if(n==no){
			printf("congratulations......:) you won the game..........");
			b=5;
		
		}
		if(b==0)
		{
			printf("you lose :(........... try again....");
			}	
	
		}
		
}
