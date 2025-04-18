//program to return structure as function return type
#include<stdio.h>
#include<conio.h>
struct student
{
	int id;
	char name[20];
};
struct student getdata(struct student s1);  //prototype
void main()
{
	struct student s1;
	clrscr();
	s1 = getdata(s1);
	printf("\n id is : %d",s1.id);
	printf("\n name is : %s",s1.name);
	getch();
}
struct student getdata(struct student s1)
{
	printf("\n enter id : ");
	scanf("%d",&s1.id);
	printf("\n enter name : ");
	scanf("%s",&s1.name);
	return s1;
}