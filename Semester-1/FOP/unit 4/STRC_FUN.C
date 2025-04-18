//Program to pass structure as an argument of UDF
#include<stdio.h>
#include<conio.h>
void print_data(struct book b);
struct book
{
	int bookno;
	char book_title[20];
	int price;
	int edition;
	int no_copy;
};
void main()
{
	struct book b1;
	clrscr();
	printf("\n enter book no : ");
	scanf("%d",&b1.bookno);
	printf("\n enter title of book : ");
	scanf("%s",&b1.book_title);
	printf("\n enter price : ");
	scanf("%d",&b1.price);
	printf("\n enter edition : ");
	scanf("%d",&b1.edition);
	printf("\n enter total copy : ");
	scanf("%d",&b1.no_copy);
	print_data(b1);  //b1 is variable of type structure
	getch();
}
void print_data(struct book b2)
{
	printf("\n id is : %d",b2.bookno);
	printf("\n title of book is : %s",b2.book_title);
	printf("\n price of book : %d",b2.price);
	printf("\n edition of book : %d",b2.edition);
	printf("\n total copies of book : %d",b2.no_copy);
}