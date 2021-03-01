
/*
 QUESTION :- Write a program to find out the largest and second largest element of an array
*/


#include <stdio.h>

void main(void)
{
    int a[100], i, n, max_1, max_2;

    printf("\n Enter the number of elements for your array :-");
    scanf("%d", &n);

    printf("\n Enter %d elements of your array :- ", n);
    for ( i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    
    if (a[0] > a[1])
    {
        max_1 = a[0];
        max_2 = a[1];
    }
    else
    {
        max_2 = a[0];
        max_1 = a[1];
    }

    for (i = 2; i < n; i++)
    {
        if (a[i] > max_1)
        {
            max_2 = max_1;
            max_1 = a[i];
        }
        else if (a[i] > max_2)
        {
            max_2 = a[i];
        }
    }
    printf("\n the second largest value is :- %d ", max_2);
}