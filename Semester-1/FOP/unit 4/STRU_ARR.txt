//simple program to understand concept of array of structure
#include<stdio.h>
#include<conio.h>
struct book
{
	int bookid;
	int price;
	char book_name[15];
	int edition;
}b[5];   //here here of structure is declare at the end of structure
void main()
{
	//struct book b[5];  //array of structure
	int i;
	clrscr();
	//reading data for structure
	for(i=0;i<5;i++)
	{
		printf("\n enter book id : ");
		scanf("%d",&b[i].bookid);
		printf("\n enter price for book : ");
		scanf("%d",&b[i].price);
		printf("\n enter book name : ");
		scanf("%s",&b[i].book_name);
		printf("\n enter book edition : ");
		scanf("%d",&b[i].edition);
	}
	clrscr();
	//printing data of structure
	for(i=0;i<5;i++)
	{
		printf("\n book id : %d",b[i].bookid);
		printf("\n book price : %d",b[i].price);
		printf("\n title of book : %s",b[i].book_name);
		printf("\n edition of book : %d",b[i].edition);
	}
	getch();
}
//write a program to store record of student using structure
//program to store record of employee using structure
