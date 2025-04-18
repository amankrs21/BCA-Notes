//program to understand UDF with argument with return type
#include<stdio.h>
#include<conio.h>
int addition(int n1,int n2);  //as an argument you can pass any type of value
void main()    //you can change return type of main funciton
{
	int ans,num1,num2;
	clrscr();
	printf("\n you are in main function");
	printf("\n enter value for num1 : ");
	scanf("%d",&num1);
	printf("\n enter value for num2 : ");
	scanf("%d",&num2);
	ans = addition(num1,num2); //calling of function & save output in variable ans
	printf("\n Addition of two numbers is : %d",ans);
	getch();

}
int addition(int n1, int n2)
{
	//here no need to take input
	//as we pass it from main function
	return (n1+n2);
}