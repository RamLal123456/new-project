// 5 5 5 5 5 
// 4 4 4 4 4
// 3 3 3 3 3 
// 2 2 2 2 2 
// 1 1 1 1 1 

#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,row;
	printf("Enter the number : ");
	scanf("%d",&row);
	for(i=row;i>=1;i--)
	{
		for(j=1;j<=row;j++)
		{
			printf("%d ",i);
		}
		printf("\n");
	}
	getch();
}