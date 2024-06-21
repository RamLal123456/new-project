// 5 4 3 2 1 
// 5 4 3 2 1
// 5 4 3 2 1 
// 5 4 3 2 1 
// 5 4 3 2 1 

#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,row;
	printf("Enter the number : ");
	scanf("%d",&row);
	for(i=row;i>=1;i--)
	{
		for(j=row;j>=1;j--)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
	getch();
}