//writing a function that returns 1 if the number is prime and returns zero when the function is not prime
#include<stdio.h>
int isprime(int n)
{
	int i,a=0;
	for(i=2;i<n;i++){
		if(n%i==0){
			a++;
			break;
			
		}
	}
	if(a==1){
		return 0;
	}
	else{
		return 1;
	}
}int main(){
	int n;
	printf("please enter the number:");
	scanf("%d",&n);
	printf("1 means prime.\n 0 means not a prime\n the result status is %d",isprime(n));
}
