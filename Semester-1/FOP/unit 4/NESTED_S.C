//Program of nested structure
#include<stdio.h>
#include<conio.h>
struct employee
{
	int empid;
	int salary;
	struct date      //nested structure
	{
		int day;
		int month;
		int year;
	}doj;
	char designation[20];
	char name[20];
	struct address
	{
		int house_no;
		char soc_name[25];
	}add;
}e[5];
void main()
{
	int i;
	//struct employee e[5];
	clrscr();

	for(i=0;i<5;i++)
	{
		printf("\n enter employee number : ");
		scanf("%d",&e[i].empid);
		printf("\n enter salary : ");
		scanf("%d",&e[i].salary);
		printf("\n enter joining day : ");
		scanf("%d",&e[i].doj.day);
		printf("\n enter month of joining : ");
		scanf("%d",&e[i].doj.month);
		printf("\n enter year of joining : ");
		scanf("%d",&e[i].doj.year);
		printf("\n enter designation : ");
		scanf("%s",&e[i].designation);
		printf("\n enter name : ");
		scanf("%s",&e[i].name);
		printf("\n enter house no : ");
		scanf("%d",&e[i].add.house_no);
		printf("\n enter society name : ");
		scanf("%s",&e[i].add.soc_name);
	}
	//printing data
	for(i=0;i<5;i++)
	{
		printf("\n employee number : %d",e[i].empid);
		printf("\n salary : %d",e[i].salary);
		printf("\n date of joining : %d %d %d",e[i].doj.day, e[i].doj.month, e[i].doj.year);
		printf("\n designation : %s",e[i].designation);
		printf("\n name : %s",e[i].name);
		printf("\n house no : %d",e[i].add.house_no);
		printf("\n society name : %s",e[i].add.soc_name);
	}
	getch();
}