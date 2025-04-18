//Searching operation using 2D array
#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[10][10],row,column,search_ele,flag=1,i,j;
	clrscr();
	printf("\n enter total rows : ");
	scanf("%d",&row);
	printf("\n enter total column : ");
	scanf("%d",&column);
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
		      printf("\n enter element : ");
		      scanf("%d",&arr[i][j]);
		}
	}
	printf("\n enter element for search : ");
	scanf("%d",&search_ele);
	clrscr();
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
			printf("\t %d",arr[i][j]);
		}
		printf("\n");
	}
	//logic of searching
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
			if(search_ele == arr[i][j])
			{
				flag=0;
				printf("\n element found at : %d , %d",i,j);
				continue;
			}
		}

	}
	if(flag==1)
	{
		printf("\n element not found");
	}
	getch();
}