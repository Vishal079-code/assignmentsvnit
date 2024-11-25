//program to print fabonaaci series upto the term given
#include<stdio.h>
int fabo(int n){
	if(n==1){
	return 0;
	}
	 else if(n==2){
	return 1;
	}
	else{
	
	return fabo(n-1)+fabo(n-2);}
	
}
int main()
{
	int n;int i;
	printf("please enter the number of terms you want to print :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d ",fabo(i));
		if(i!=n){
			printf(",");
		}
		
	}
	return 0;
}
