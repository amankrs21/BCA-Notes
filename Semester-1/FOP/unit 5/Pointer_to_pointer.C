//simple program to understand the concept of pointer to pointer
#include<stdio.h>
#include<conio.h>
void main()
{
	int num=100;
	int num1=400;
	int *ptr = &num;
	int **qt = &ptr;   //assigning address of another pointer
	int ***xt = &qt;
	int ****pt = &xt;
	clrscr();
	printf("\n value of number is : %d",num);
	printf("\n address of number is : %d",&num);
	printf("\n value of ptr is : %d",ptr);
	printf("\n value at ptr is : %d",*ptr);
	*ptr=45;
	printf("\n value of number is : %d",num);
	printf("\n address of ptr is : %d",&ptr);
	printf("\n address of ptr is : %d",qt);
	printf("\n value of number is : %d",**qt);
	**qt=150;
	printf("\n value of number is : %d",num);
	printf("\n value of number is : %d",&pt);
	ptr=&num1;
	printf("\n value of number2 is : %d",*ptr);
	printf("\n value of number2 is : %d",****pt);
	getch();
}