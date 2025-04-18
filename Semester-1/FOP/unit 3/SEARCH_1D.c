	//program for seaching element from 1Darray
#include<stdio.h>
#include<conio.h>
void main()
{
	int arr1[10],i,search_ele,flag=1;
	clrscr();
	printf("\n enter elements for array : ");
	for(i=0;i<10;i++)
	{
		printf("\n enter element for array : ");
		scanf("%d",&arr1[i]);
	}
	printf("\n enter element for search : ");
	scanf("%d",&search_ele);

	for(i=0;i<10;i++)
	{
		if(search_ele==arr1[i])
		{
			printf("\n element is find at location : %d",i+1);
			flag=1;
			break;
		}
		else
		{
			//printf("\n not found");
			flag=0;
		}
	}
	if(flag==0)
	{
		printf("\n element not found ");
	}

	getch();
}