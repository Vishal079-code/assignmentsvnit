#include<stdio.h>
int main()
{
	float a,b;
	char c;
	printf("\n please enter 1 for additiom");
	printf("\nplease enter 2 for subtraction");
	printf("\nplease enter 3 for division");
	printf("\nplease enter 4 for multiplication :");
	scanf("%c",&c);
	printf("please enter the value of operand a = ");
	scanf("%f",&a);
    printf("please enter the value of operand b = ");
	scanf("%f",&b);
	switch(c)
	 {
	 	case '1' :
	 		printf(" sum is %f",a+b);
	 		break;
	 	case '2':
	 		printf(" subtraction is %f",a-b);
	 		 break; 
		case '3':
	 		printf(" division is %f",a/b);
	 		break;
	 	case '4' :
	 		printf(" multiplication is %f",a*b);
	 		break;
	 	default:
	 			printf("you have entered wrong data");
	 			
	 			
	 			 			
	 }
	 return 0;
}

