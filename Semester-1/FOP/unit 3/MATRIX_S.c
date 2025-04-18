//Program to perform matrix subtraction
#include<stdio.h>
#include<conio.h>
void main()
{
	int arr1[3][3],arr2[3][3],arr3[3][3];
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
	//take input of second array
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\n enter element for second array : ");
			scanf("%d",&arr2[i][j]);
		}
	}
	//Process to perfrom subtraction
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			arr3[i][j] = arr1[i][j] - arr2[i][j];
		       //	printf("\t %d = %d - %d",arr3[i][j],arr1[i][j],arr2[i][j]);
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
	printf("\n Subtraction of Array\n");

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