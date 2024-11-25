#include<stdio.h>
int main()
{
	float seconds,minutes,hours,days;
	printf("the earth takes period of revolution of 31558150 seconds\n");
	seconds=31558150;
	minutes=seconds/60;
	hours=minutes/60;
	days=hours/24;
	printf("the time period taken by the earth for 1 revolution  in minutes is %f\n",minutes);
	printf("the time period taken by the earth for 1 revolution  in hours is %f\n",hours);
	printf("the time period taken by the earth for 1 revolution  in days is %f\n",days);
	return 0;
	
	
}
