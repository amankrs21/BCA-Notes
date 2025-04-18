//program to store and perfrom additon of all the elements store in array
#include<stdio.h>
#include<conio.h>
void main()
{
	int num_array[10],i,sum=0;
	//here array size is 10
	//index value of array start by 0
	clrscr();
	//reding data for array
	for(i=0;i<10;i++)
	{
		printf("\n enter element for an array : ");
		scanf("%d",&num_array[i]);
	}
	//performing additon
	printf("\n Entered 1D array is \n");
	for(i=0;i<10;i++)
	{
		sum=sum+num_array[i];
	}
	printf("\n Additon of array element is : %d",sum);
	getch();
}