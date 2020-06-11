#include<Stdio.h>
#include<conio.h>
int main()
{
	int i,j,counter=1;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",counter++);
		}
		printf("\n");
	}
	return 0;
}
