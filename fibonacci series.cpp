#include<stdio.h>
#include<conio.h>
int main()
{
	int n,f1,f2,f3;
	printf("enter the number:");
	scanf("%d",&n);
	f1=0;
	f2=1;
	printf("%d\t%d",f1,f2);
	while(f3<n)
	{
		printf("\t%d",f3);
		f1=f2;
		f2=f3;
		f3=f1+f2;
	}
	return 0;
}
