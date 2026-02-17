#include <stdio.h>
int leap_Year(int season)
{
	int isleap_Year;
	if(season%4==0 && ((season%100==0 && season%400==0) || (season%100!=0 && season%400!=0)))
	{
		isleap_Year=1;
	}
	else
	{
		isleap_Year=0;
	}
	if(isleap_Year==1)
	{
		printf("%d Is a Leap Year.", season);
		printf("\n");
	}
	else
	if (isleap_Year==0)
	{
		printf("%d Is Not a Leap Year.", season);
		printf("\n");
	}
}
int main(void)
{
	int year;
	int find;
	printf("Enter the Year to determine whether it's a Leap Year or Not: ");
	scanf("%d", &year);
	printf("\n");
	find=leap_Year(year);
	return 0;
}