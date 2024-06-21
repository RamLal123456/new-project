// 1 6 11 16 21 
// 2 7 12 17 22 
// 3 8 13 18 23 
// 4 9 14 19 24 
// 5 10 15 20 25 

#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k,row;
	printf("Enter the number : ");
	scanf("%d",&row);
	for(i=1;i<=row;i++)
	{
		k=i;
		for(j=1;j<=row;j++)
		{
			printf("%d ",k);
			k=k+row;
		}
		printf("\n");
	}
	getch();
}