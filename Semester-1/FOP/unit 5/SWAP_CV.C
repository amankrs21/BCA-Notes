//Program to swap value of two variable using call by value
#include<stdio.h>
#include<conio.h>
void swap(int n1, int n2);
void main()
{
	int num1,num2;
	clrscr();
	printf("\n enter number 1: ");
	scanf("%d",&num1);
	printf("\n enter number 2 : ");
	scanf("%d",&num2);
	swap(num1,num2); //calling function with value
	printf("\n value of num1 and num2 in main function after swap : ");
	printf("\n num1 : %d and num2 : %d",num1,num2 );
	getch();
}
void swap(int n1, int n2)
{
	n1 = n1 + n2;
	n2 = n1 - n2;
	n1 = n1 - n2;
	printf("\n value after swapping ");
	printf("\n num1 : %d and num2 : %d",n1,n2);
}