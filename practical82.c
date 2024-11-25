//to find the value of ncr
#include<stdio.h>
int fact(int n){
	int i,factorial=1;
	for(i=1;i<=n;i++){
		factorial*=i;
	}
	return factorial;
}
int ncr(int a,int r){
	int value;
	value=fact(a)/(fact(r)*fact(a-r));
	return value;
}
int main(){
	int n,r;
	printf("please enter the value of the n:");
	scanf("%d",&n);
	printf("please enter the value of the r:");
	scanf("%d",&r);
	printf("the value of ncr with n= %d,r=%d is %d",n,r,ncr(n,r));

}

