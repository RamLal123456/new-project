// 1 2 3 4 5
// 1 2 3 4 5 
// 1 2 3 4 5 
// 1 2 3 4 5
// 1 2 3 4 5 

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
			printf("%d ",j);
		}
		printf("\n");
	}
	getch();
}