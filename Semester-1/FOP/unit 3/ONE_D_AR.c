//program to store and print elements from 1D array
#include<stdio.h>
#include<conio.h>
void main()
{
	int num_array[10],i;
	//here array size is 10
	//index value of array start by 0
	clrscr();
	//reding data for array
	for(i=0;i<10;i++)
	{
		printf("\n enter element for an array : ");
		scanf("%d",&num_array[i]);
	}
	//printing array
	printf("\n Entered 1D array is \n");
	for(i=0;i<10;i++)
	{
		printf("\n %d",num_array[i]);
	}
	getch();
}