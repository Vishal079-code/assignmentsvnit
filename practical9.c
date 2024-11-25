//program to caluculate hour min seconds into total seconds
#include<stdio.h>
int main()
{
	float hour,minute,seconds,totalseconds;
	printf("please enter the time in hour =");
	scanf("%f",&hour);
	printf("please enter the time in minute =");
	scanf("%f",&minute);
	printf("please enter the time in seconds =");
	scanf("%f",&seconds);
	totalseconds=hour*3600+minute*60+seconds;
	printf("the value of the total seconds is %f",totalseconds);
	return 0;
	
	
	
}
