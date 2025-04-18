//program to understand UDF without argument without return type
//if function is not retrun any thing that mean that function is void
//so retrun type of that function is void
#include<stdio.h>
#include<conio.h>
void addition();  //no argument is pass and no retrun type so function is void
void main()    //you can change return type of main funciton
{
	clrscr();
	printf("\n you are in main function");
	addition(); //calling of function
	getch();

}
void addition()
{
	int num1,num2;
	printf("\n enter value for num1 : ");
	scanf("%d",&num1);
	printf("\n enter value for num2 : ");
	scanf("%d",&num2);
	//fuction is not return any thing so void function
	//print your answer here
	//only we have to call function from main()
	printf("\n Addition of two number is : %d",(num1+num2));
}