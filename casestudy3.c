//case study finding the digits
#include<stdio.h>
int main()
{
 printf("please enter the number of inputs :");
 int n;
 scanf("%d",&n);
 int i,a,r,b,c=0;
 for(i=0;i<n;i++)
 {
 	printf("please enter the number:");
 	scanf("%d",&a);
 	b=a;
 	while(a>0){
 	   r=a%10;
		a=a/10;
		if(b%r==0){
			
			c++;
		}	
	 }
	 if(c==0){
	 	printf("sorry no such digits found");
		 	 }
		 	 else{
		 	 	printf("%d\n",c);
			  }
 }
}
