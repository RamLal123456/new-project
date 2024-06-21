// 1 1 1 1 1
// 2 2 2 2 2 
// 3 3 3 3 3 
// 4 4 4 4 4
// 5 5 5 5 5 

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
			printf("%d ",i);
		}
		printf("\n");
	}
	getch();
}