
/*
 QUESTION :- Write a program to find out the second largest element of an array
*/


#include <stdio.h>

void main(void)
{
    int array[100], i, numberOfElements, largestValue, secondLargestValue;

    printf("\n Enter the number of elements for your array :-");
    scanf("%d", &numberOfElements);

    printf("\n Enter %d elements of your array :- ", numberOfElements);
    for ( i = 0; i < numberOfElements; i++)
    {
        scanf("%d", &array[i]);
    }
    
    if (array[0] > array[1])
    {
        largestValue = array[0];
        secondLargestValue = array[1];
    }
    else
    {
        secondLargestValue = array[0];
        largestValue = array[1];
    }

    for (i = 2; i < numberOfElements; i++)
    {
        if (array[i] > largestValue)
        {
            secondLargestValue = largestValue;
            largestValue = array[i];
        }
        else if (array[i] > secondLargestValue)
        {
            secondLargestValue = array[i];
        }
    }
    printf("\n the second largest value is :- %d ", secondLargestValue);
}