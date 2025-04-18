//find maxinum number from 1D array
#include<stdio.h>
#include<conio.h>
void main()
{
	int num_arr[50],limit,max,i;
	clrscr();
	printf("\n how many elements want to store in array : ");
	scanf("%d",&limit);
	for(i=0;i<limit;i++)
	{
		printf("\n enter element for array : ");
		scanf("%d",&num_arr[i]);
	}
	max=num_arr[0];  //assign first element of array
	for(i=0;i<limit;i++)
	{
		if(max<num_arr[i])
		{
			max=num_arr[i];
		}
	}
	printf("\n maximum element from an array is : %d",max);
	getch();
}