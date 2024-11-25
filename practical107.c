//program which takes input as a number and reverse its n digits from last 
#include<stdio.h>
 int power(int a,int b){
 	int i,power=a;
 	for(i=0;i<b;i++)
 	{
 	power*=a;	
	 }
	 return power;
 }
int flip(int n,int s){
	int a=n,reverse=0,value;
s--;
	n=n%power(10,s);
	int r ;
	while(n>0){
		r=n%10;
		n=n/10;
		reverse=reverse*10+r;	
	}
	value=a/power(10,s)*power(10,s)+reverse;
	return value;
	
	
}
int main(){
	int n,a;
	printf("please enter the number:");
	scanf("%d",&n);
	printf("please enter the number upto you have to reverse:");
	scanf("%d",&a);
	printf("the required output is %d",flip(n,a));
}
