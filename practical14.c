#include<stdio.h>
int main()
{
	char c;
	printf("please enter the character=");
	scanf("%c",&c);
	printf("so by the given data the characterASCII code is %d\n",c);
	 if (c>96)
	 {
	 	printf("the given character is a small letter");
	 	
	 }
	 else if (c>64)
	 {
	 	printf("the given character is a capital letter ");
	 	
	 	
	 }
	else if (c>47)
	 {
	 	printf("the given character is a digit ");
	 	
	 	
	 }
	
	else if (c>32)
	 {
	 	printf("the given character is a symbol  ");
	 	
	 	
	 }
	 else
	 {
	 	printf("sorry you have entered the wrong value");
	 }
	 
	
}
