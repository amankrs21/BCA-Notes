//passing array as an argument to function
//function to perform addition of all elements of array
//here we pass array element index by index
#include<stdio.h>
#include<conio.h>
int add_arr_fun(int n,int a);
void main()
{
	int num[10],i,ans=0;
	clrscr();
	for(i=0;i<5;i++)
	{
		printf("\n enter element : ");
		scanf("%d",&num[i]);
	}
	for(i=0;i<5;i++)
	{
		ans = add_arr_fun(num[i],ans);
	}
	printf("\n addition of array element is : %d",ans);
	getch();
}
int add_arr_fun(int n,int ans)
{
	ans = ans + n;
	return ans;

}