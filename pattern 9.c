// 1  2  3  4  5
// 2  4  6  8 10 
// 3  6  9 12 15
// 4  8 12 16 20
// 5 10 15 20 25 

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
			printf("%d ",i*j);
		}
		printf("\n");
	}
	getch();
}