/*
Question :- Write the program to find the second smallest element of an array

notes :- This program is made using bubble sort, however another version of this
         program can be made using another logic, see the program 64.c for the another
         logic 
*/

#include <stdio.h>

void main(void)
{
    int array[100], numberOfElements, temp, i, j;

    printf("\n Enter the number of elements for your array :- ");
    scanf("%d", &numberOfElements);

    //Inserting values to the array -------
    printf("\n Enter the %d elements of your array :- ",numberOfElements);
    for (i = 0; i < numberOfElements; i++)
    {
        scanf("%d", &array[i]);
    }
    
    //Bubble sorting in descending order till the 2nd last value of the array gets sorted---
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < numberOfElements - i - 1; j++)
        {
            if (array[j] < array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
            
        }
        
    }
    
    printf("\n The second smallest value of the array is :- %d \n", array[numberOfElements - 2]);
}