#include<stdio.h>
int main()
{
	int totalseconds,seconds,minutes,hours;
	printf("please enter the totaltime in seconds");
	scanf("%d",&totalseconds);
	hours=totalseconds/3600;
	minutes=(totalseconds-hours*3600)/60;
	seconds=(totalseconds-hours*3600 -minutes*60);
	printf("the total seconds can be written in hour , minute and seconds as follows\n");
	printf( "%d seconds=%d hours: %d minutes :%d seconds",totalseconds,hours,minutes,seconds);
	return 0;
	
}
