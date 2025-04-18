//program of arithmetic operation using switch case
#include<conio.h>
#include<stdio.h>
void main()
{
	int ch;
	int num1,num2,ans;
	clrscr();
	printf("\n Addition ..........Press 1");
	printf("\n Subtraction........Press 2");
	printf("\n Multiplication ....Press 3");
	printf("\n Division...........Press 4");
	printf("\n Modulo.............Press 5");
	printf("\n Enter your choice for operation between ( 1 to 5 : ");
	scanf("%d",&ch);
	printf("\n enter value of num1 : ");
	scanf("%d",&num1);
	printf("\n enter value of num2 : ");
	scanf("%d",&num2);
	switch(ch)
	{
		case 1:
			ans=num1+num2;
			printf("\n addition of two number is : %d",ans);
			break;
		case 2:
			ans=num1-num2;
			printf("\n subtraction of two number is : %d",ans);
			break;
		case 3:
			ans=num1*num2;
			printf("\n Multiplication of two number is : %d",ans);
			break;
		case 4:
			ans=num1/num2;
			printf("\n division of two number is : %d",ans);
			break;
		case 5:
			ans=num1%num2;
			printf("\n modulo of two number is : %d",ans);
			break;
		default:
			printf("\n please enter valid choice for operation");
			break;

	}
	getch();
}