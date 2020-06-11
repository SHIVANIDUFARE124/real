#include<stdio.h>
int main()
{
	int i,sum=0,num;
	float avg;
	printf("enter the number of student in class:");
	scanf("%d",&num);
	int marks[num];
	printf("enter marks of all students\n");
	for(i=0;i<num;i++)
	{
		scanf("%d",&marks[i]);
		sum+=marks[i];
	}
	avg=(float)sum/num;
	printf("average of class is %f\n",avg);
	return 0;
}
