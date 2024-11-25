//casestudy based filling the jars 
#include<stdio.h>
int main()
{
   int i,n,m,a,b,k,sum,c=0;
   printf("please enter the number of jars (should be more than 3):");
   scanf("%d",&n);
   printf("please enter the number of operations:");
   scanf("%d",&m);
   for(i=0;i<m;i++){
   	if(n<=3&&n>=10000000&&m<=1&&m>=100000){
   		printf("sorry error generated due to invalid input");
   		break;
	   }
   	printf("please enter the  starting jar no.:");
   	scanf("%d",&a);
   	printf("please enter the ending jar no:");
   	scanf("%d",&b);
   	if(a<=1&&b<=1&&a>=n&&b>=n&&b>a){
   		printf("sorry error generated due to invalid input ");
   		break;
	   }
	   printf("enter the number of candies:");
	   scanf("%d",&k);
	   sum=sum +(b-a+1)*k;
   
   if(k<=0&&k>=1000000)
   {
   	printf("invalid input");
   }
}
  printf("the average values of candies is %d",sum/n);
  }
