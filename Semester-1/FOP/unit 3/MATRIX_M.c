//Program to perform matrix multiplication
#include<stdio.h>
#include<conio.h>
void main()
{
	int arr1[3][3],arr2[3][3],arr3[3][3];
	int i,j,k;
	clrscr();
	//take input of first array
	for(i=0;i<3;i++) //row
	{
		for(j=0;j<2;j++) //column
		{
			printf("\n enter element for first array : ");
			scanf("%d",&arr1[i][j]);
		}
	}
	//take input of second array
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\n enter element for second array : ");
			scanf("%d",&arr2[i][j]);
		}
	}
	//Process to perfrom multiplication
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		      arr3[i][j]=0;
			for(k=0;k<3;k++)
			{
			      arr3[i][j] = arr3[i][j] + (arr1[i][k] * arr2[k][j]);
			}
		}
		printf("\n");
	}
	clrscr();
	printf("\n First Array\n");

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\t %d",arr1[i][j]);

		}
		printf("\n");
	}
	printf("\n Second Array\n");

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\t %d",arr2[i][j]);

		}
		printf("\n");
	}
	printf("\n Multiplication of Array\n");

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\t %d",arr3[i][j]);

		}
		printf("\n");
	}
	getch();
}