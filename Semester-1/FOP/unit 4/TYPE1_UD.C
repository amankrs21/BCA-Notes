//program to understand UDF without argument with return type
#include<stdio.h>
#include<conio.h>
int addition();  //here () is empty mean no argument is pass
void main()    //you can change return type of main funciton
{
	int ans;
	clrscr();
	printf("\n you are in main function");
	ans = addition(); //calling of function & save output in variable ans
	printf("\n Addition of two numbers is : %d",ans);
	getch();

}
int addition()
{
	int num1,num2;
	printf("\n enter number 1 : ");
	scanf("%d",&num1);
	printf("\n enter number 2 : ");
	scanf("%d",&num2);
	return (num1 + num2);
}