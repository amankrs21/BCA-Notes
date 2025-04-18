//Program to transpose matrix
#include <conio.h>
#include <stdio.h>
int main()
{
    int arr1[10][10], transpose[10][10], r, c, i, j;
    printf("\n Enter rows : ");
    scanf("%d",&r);
    printf("\n Enter Column : ");
    scanf("%d",&c);


    // Assigning elements to the matrix
    printf("\nEnter matrix elements:\n");
    for (i = 0; i < r; i++)
    {
	for (j = 0; j < c; j++)
	{
	    printf("\n Enter element for matrix : ");
	    scanf("%d", &arr1[i][j]);
	}
    }

    // Displaying the matrix a[][]
    printf("\nEntered matrix: \n");
    for (i = 0; i < r; i++)
    {
	for (j = 0; j < c; j++)
	{
	    printf("%d  ", arr1[i][j]);
	    /*if (j == c - 1)
		printf("\n");*/
	}
	printf("\n");
    }

    // Finding the transpose of matrix a
    for (i = 0; i < r; i++)
    {
	for (j = 0; j < c; j++)
	{
	    transpose[j][i] = arr1[i][j];
	}
    }

    // Displaying the transpose of matrix a
    printf("\nTranspose of the matrix:\n");
    for (i = 0; i < c; i++)
    {
	for (j = 0; j < r; j++)
	{
	    printf("%d  ", transpose[i][j]);
	    /*if (j == r - 1)
		printf("\n");   */
	}
	printf("\n");
    }
    getch();
    return 0;
}