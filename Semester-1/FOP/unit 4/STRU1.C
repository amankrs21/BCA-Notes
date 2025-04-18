//Program of sturucture to understand concept
//of variable declaration and accessing datamember of structure
#include<stdio.h>
#include<conio.h>
struct student
{
	int id;
	char name[20];
	int age;
	char bg[3];
	char class_det[3];
	char city[20];
};
void main()
{
	struct student s1;
	clrscr();
	//reading data for student
	printf("\n enter id : ");
	scanf("%d",&s1.id);
	printf("\n enter name : ");
	scanf("%s",&s1.name);
	printf("\n enter age : ");
	scanf("%d",&s1.age);
	printf("\n enter blood group : ");
	scanf("%s",&s1.bg);
	printf("\n enter class detail : ");
	scanf("%s",&s1.class_det);
	printf("\n enter city : ");
	scanf("%s",&s1.city);
	//printing the data of structure
	printf("\n id is : %d",s1.id);
	printf("\n name is : %s",s1.name);
	printf("\n age is : %d",s1.age);
	printf("\n blood group is : %s",s1.bg);
	printf("\n class detail : %s",s1.class_det);
	printf("\n city : %s",s1.city);
	getch();
}