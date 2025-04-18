//Program to perform serarching operaiton on 2D array
#include<stdio.h>
#include<conio.h>
void main()
{
	int arr1[3][3],i,j,search_ele,flag=1;
	clrscr();
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\n enter element for array : ");
			scanf("%d",&arr1[i][j]);
		}
	}
	printf("\n enter element for search : ");
	scanf("%d",&search_ele);
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\t %d",arr1[i][j]);
		}
		printf("\n");
	}
	//logic for search
	for(i=0;i<3;i++)
	{
	       for(j=0;j<3;j++)
	       {
			if(search_ele==arr1[i][j])
			{
				printf("\n element find at location %d %d",i+1,j+1);
				flag=1;
				break;
			}
			else
			{
				flag=0;
			}
	       }
	}
	if(flag==0)
	{
		printf("\n element not found");
	}	getch();
}