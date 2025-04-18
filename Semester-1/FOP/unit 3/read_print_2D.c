//Program to read and print 2D array (matrix)
#include<stdio.h>
#include<conio.h>
void main()
{
	int arr1[3][3];
	int i,j;
	clrscr();
	//take input of first array
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\n enter element for first array : ");
			scanf("%d",&arr1[i][j]);
		}
	}
	
	printf("\n Printing an Array\n");

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\t %d",arr1[i][j]);

		}
		printf("\n");
	}
	

	
	getch();
}