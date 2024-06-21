// 1 1 2 3 1
// 1 2 2 3 2 
// 1 3 2 3 3
// 1 4 2 3 4
// 1 5 2 3 5 

#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=3;j++)
		{
			printf("%d %d ",j,i);
		}
		printf("\n");
	}
	getch();
}