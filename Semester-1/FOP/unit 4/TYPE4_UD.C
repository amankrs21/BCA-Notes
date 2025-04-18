//program to understand UDF with argument without return type
//if function is not retrun any thing that mean that function is void
//so retrun type of that function is void
#include<stdio.h>
#include<conio.h>
void addition(int n1,int n2);  //any type of argument one can pass
void main()    //you can change return type of main funciton
{       int num1,num2;
	clrscr();
	printf("\n you are in main function");
	printf("\n enter value for number 1 : ");
	scanf("%d",&num1);
	printf("\n enter value for number 2 : ");
	scanf("%d",&num2);
	addition(num1,num2); //calling of function
	getch();

}
void addition(int n1, int n2)
{
	//as return type of function is void
	//so no need to write retrun statement
	//print your answer here only
	printf("\n Addition of numbers is : %d",n1+n2);
}