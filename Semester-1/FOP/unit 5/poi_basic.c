//Simple Program to understand concept of pointer
#include<stdio.h>
#include<conio.h>
void main()
{
	int num;
	int *ptr; //declring pointer
	clrscr();
	//intilize pointer 
	ptr = &num;
	//reading value for num
 	printf("\n enter any value : ");
	scanf("%d",&num);
	printf("\n value of number : %d",num);
	printf("\n value of number using pointer : %d",*ptr);
	printf("\n address of number variable without using pointer : %u",&num);
	printf("\n address of number using pointer : %u",ptr);
	printf("\n address of pointer variable : %u",&ptr);
	getch();
}