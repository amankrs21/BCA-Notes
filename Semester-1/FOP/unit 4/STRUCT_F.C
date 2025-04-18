//program to understand how to pass structure as an argument of UDF
#include<stdio.h>
#include<conio.h>
struct employee
{
	int empid;
	char emp_name[20];
	int salary;
};
void print_data(struct employee s1[5]);
void main()
{
	//struct employee e1;
	int i;
	struct employee e1[5];
	clrscr();
	//reading data of structure
	for(i=0;i<5;i++)
	{
		printf("\n enter id : ");
		scanf("%d",&e1[i].empid);
		printf("\n name please : ");
		scanf("%s",&e1[i].emp_name);
		printf("\n enter salary : ");
		scanf("%d",&e1[i].salary);
	}
	//printing data using user defined function
	print_data(e1);
	getch();


}
void print_data(struct employee e1[5])
{
	int i;
	for(i=0;i<5;i++)
	{
		printf("\n id is : %d",e1[i].empid);
		printf("\n name is : %s",e1[i].emp_name);
		printf("\n salary is : %d",e1[i].salary);
	}
}
