//Addition of array element by passing 2D array as an function argument
//so when you pass 2D array it is mandetory to pass column size
//else it gives and error
#include<stdio.h>
#include<conio.h>
int mat_add_fun(int n[][3],int ans);
void main()
{
	int num[3][3],i,j,ans=0;
	clrscr();
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\n enter element : ");
			scanf("%d",&num[i][j]);
		}
	}
	ans = mat_add_fun(num,ans);
	printf("\n addition of array element is : %d",ans);
	getch();
}
int mat_add_fun(int n[][3],int a)
{
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			a = a + n[i][j];
		}
	}
	return a;
}