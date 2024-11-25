//verifing that the entered number is the part of fabonacci series or not
#include<stdio.h>
int fabo(int n){
	if(n==1)
	return 0;
	else if (n==2)
	return 1;
	else
	return fabo(n-1)+fabo(n-2);
}
 int isfabo(int n)
 {
 	int a,i=1;
 	while(fabo(i)<=n){
 		a=fabo(i);
 		i++;
	 }
	 if(a==n)
	 return 1;
	 else 
	 return 0;
 }
 int main()
 {
 	int a,i,b;
 	printf("please enter the number of inputs:");
 	scanf("%d",&a);
 	for(i=0;i<a;i++){
 		printf("please enter the number to check that the number is fabo or not:");
 		scanf("%d",&b);
 		if(isfabo(b)){
 			printf("isfabo\n");}
 			else{
 				printf("isnotfabo\n");
			 }
		 }
	 }
 
