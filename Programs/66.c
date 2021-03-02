/*

Question :- Find the sum of right diagonal elements of a matrix 

note :- The right diagonal elements can be found for a square matrix only.

Square matrix :- square matrix are those matrix which have same number of rows and columns

*/

#include <stdio.h>

void main(void)
{
    int matrix[100][100], i, j, numberOfRows, sum;

    printf("\n Ehter the number of rows :- ");
    scanf("%d", &numberOfRows);

    printf("\n Enter %d elements for your matrix :- ", numberOfRows * numberOfRows);
    for (i = 0; i < numberOfRows; i++)
    {
        for (j = 0; j < numberOfRows; j++)
        {
            scanf("%d", &matrix[i][j]);
        }

    }

    sum = 0;

    //Calculation of the sum of right diagonal elements ---
    for (i = 0; i < numberOfRows; i++)
    {
        for (j = 0; j < numberOfRows; j++)
        {
            if ( i == j)
            {
                sum = sum + matrix[i][j];
            }
            
        }
        
    }
    
    //Printing the value of sum to the user ----
    printf("\n The sum of the right diagonal elements of your matrix is %d \n", sum);
     
}