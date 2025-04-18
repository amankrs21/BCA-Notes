//program to store name in 2D array
//this program allow me to store name of 4 person as per size of array
#include<stdio.h>
#include<conio.h>
void main()
{
	char name[4][15];  //you can change size of rows and column as per your choice
	int i;
	clrscr();
	for(i=0;i<4;i++)
	{
		printf("\n enter your name : ");
		gets(name[i]);
	}
	for(i=0;i<4;i++)
	{
		printf("\n your name is : %s",name[i]);
	}
	getch();
}