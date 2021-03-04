/*

Question :- Write a program to find the sum of each row of a matrix

*/

#include <stdio.h>

#define MAX 100

void main(void)
{
    int matrix[MAX][MAX], result[MAX];
    int numberOfRows, numberOfColumns, sum, i, j;

    printf("\n Enter the number of rows and columns for your matrix :- ");
    scanf("%d %d", &numberOfRows, &numberOfColumns);

    printf("\n Enter the %d elements of your matrix :- ", numberOfRows * numberOfColumns);
    for (i = 0; i < numberOfRows; i++)
    {
        for (j = 0; j < numberOfColumns; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
        
    }

    for (i = 0; i < numberOfRows; i++)
    {   
        sum = 0;
        for (j = 0; j < numberOfColumns; j++)
        {
            sum = sum + matrix[i][j];
        }
        result[i] = sum;
        
    }

    printf("\n Sum of each row of the matrix ---------> \n");
    for (i = 0; i < numberOfRows; i++)
    {
        printf("\n Sum of elements of row %d is :- %d", i + 1, result[i]);
    }
    
    
    
}