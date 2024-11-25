//program to convert temparature from fahrenheit to centigrade degrees
#include<stdio.h>
int main()
{
	float f,c;
	printf("please enter the value of degree fahrenheit ");
	scanf("%lf",&f);
	c=(f-32)*5/9;
	printf("the value of degree celcius is %lf",c);
	return 0;
}
