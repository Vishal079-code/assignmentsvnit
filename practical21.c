//SIMPLE CALCULATOR USING SWITCH CASE
#include<stdio.h>
int main()
{
	float a,b;
    char op;
	printf("please enter the charater between +,-,*,/ :");
	scanf("%c",&op);
	printf("please enter the value of operator a = ");
	scanf("%f",&a);
    printf("please enter the value of operator b = ");
	scanf("%f",&b);
	switch(op)
	 {
	 	case '+':
	 		printf(" sum is %f",a+b);
	 		break;
	 	case '-':
	 		printf(" subtraction is %f",a-b);
	 		 break; 
		case '/':
	 		printf(" division is %f",a/b);
	 		break;
	 	case '*':
	 		printf(" multiplication is %f",a*b);
	 		break;
	 	default:
	 			printf("you have entered wrong data");
	 			
	 			
	 			 			
	 }
	 return 0;
}

