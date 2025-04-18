//program for sorting array element
#include<stdio.h>
#include<conio.h>
void main()
{
	int arr1[10],i,j,temp;
	//clrscr();
	printf("\n enter elements for array : ");
	for(i=0;i<10;i++)
	{
		printf("\n enter element for array : ");
		scanf("%d",&arr1[i]);
	}
	//printing unsorted array
	printf("\n original array is : \n");
	for(i=0;i<10;i++)
	{
		printf("\t %d",arr1[i]);
	}
	//logic for sorting array
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(arr1[i]>arr1[j])
			{
				temp=arr1[j];
				arr1[j]=arr1[i];
				arr1[i]=temp;
			}
		}
	}
	//printing sorted array
	printf("\n sorted array is : \n");
	for(i=0;i<10;i++)
	{
		printf("\t %d",arr1[i]);
	}

	getch();
}