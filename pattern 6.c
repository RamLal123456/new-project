//  1  2  3  4  5
//  6  7  8  9 10 
// 11 12 13 14 15 
// 16 17 18 19 20
// 21 22 23 24 25 

#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k=1,row;
	printf("Enter the number : ");
	scanf("%d",&row);
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=row;j++)
		{
			printf("%d ",k++);
		}
		printf("\n");
	}
	getch();
}