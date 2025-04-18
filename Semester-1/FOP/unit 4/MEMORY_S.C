//Program to show memory representation of union
#include<stdio.h>
#include<conio.h>
struct student
{
	int id;
	char name[20];
	int age;
	char address[50];
	char qualification[3];
	long int phone;
};
union student2
{
	int id;
	char name[20];
	int age;
	char address[50];
	char qualification[3];
	long int phone;
};
void main()
{
	struct student s1;
	union student2 s2;
	clrscr();
	printf("\n size occupy by structure is : %d",sizeof(s1));
	printf("\n size of union is : %d",sizeof(s2));
	getch();
}