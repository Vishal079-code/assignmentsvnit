//write the function to check that the number is armstrong or not
#include<stdio.h>
#include<math.h>
int armstrong(int n)
{
	int count=0,r,a;
	int sum=0;
	a=n;
	while(n>0){
		r=n%10;
		n=n/10;
		count++;
	}
	n=a;
	while(n>0){
		r=n%10;
		n=n/10;
		sum=sum+pow(r,count);
	}
	return sum;
}
 int main()
{
	int n,a;
	printf("please enter the number  to find the number is the armstrong or not:");
	scanf("%d",&n);
	a=armstrong(n);
	if(a==n){
		printf("%d is a armstrong number:",n);
	}
	else{
		printf("%d is  not a armstrong number:",n);
	}
}
