//  2  4  6  8 10
// 12 14 16 18 20 
// 22 24 26 28 30 
// 32 34 36 38 40
// 42 44 46 48 50 

#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k=2,row;
	printf("Enter the number : ");
	scanf("%d",&row);
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=row;j++)
		{
			printf("%d ",k);
			k+=2;
		}
		printf("\n");
	}
	getch();
}