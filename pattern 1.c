// * * * * *
// * * * * *
// * * * * *
// * * * * *
// * * * * *

#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,row;
	printf("Enter the number : ");
	scanf("%d",&row);
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=row;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	getch();
}