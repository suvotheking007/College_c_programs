/*
Question :- Write the program to find the second smallest element of an array

notes :- This program is made using bubble sort, however another version of this
         program can be made using another logic, see the program 64.c for the another
         logic 
*/

#include <stdio.h>

void main(void)
{
    int array[100], numberOfValues, temp, i, j;

    printf("\n Ehter the number of values for your array :- ");
    scanf("%d", &numberOfValues);

    //Inserting values to the array -------
    printf("\n Enter the %d values :- ",numberOfValues);
    for (i = 0; i < numberOfValues; i++)
    {
        scanf("%d", &array[i]);
    }
    
    //Bubble sorting in descending order till the 2nd last value of the array gets sorted---
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < numberOfValues - i - 1; j++)
        {
            if (array[j] < array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
            
        }
        
    }
    
    printf("\n The second smallest value of the array is :- %d \n", array[numberOfValues - 2]);
}