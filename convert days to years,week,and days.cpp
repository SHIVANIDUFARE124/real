#include<stdio.h>
#include<conio.h>
int main()
{
	int nodays,weeks,years,days;
	printf("enter the no. of days");
	scanf("%d",&nodays);
	years=nodays/365;
	weeks=(nodays%365)/7;
	days=(nodays%365)%7;
	printf("%d=%d years,%d weeks,%d days\n",nodays,years,weeks,days);
	return 0;

}
