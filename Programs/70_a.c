/*
QUESTION :- Write a program to calculate the Finite Geometric Series 
            i.e. :- 1 + x + x^2 + x^3 + ...... + x^n
            using function that takes argument and returns value
*/

#include <stdio.h>

int calculateFiniteGeometricSeries(int, int);

void main(void)
{
    int x, n, result;

    printf("\n Enter the values of \"x\" and \"n\" :- ");
    scanf("%d %d", &x, &n);

    result = calculateFiniteGeometricSeries(x, n);

    printf("\n The value of the Finite Geometric Series :-");
    printf(" 1 + %d", x);
    for (int i = 2; i <= n; i++)
    {
        printf(" + %d^%d", x, i);
    }
    printf(" is :- %d", result);
}

int calculateFiniteGeometricSeries(int x, int n)
{
    int term, result;

    term = result = 1;

    while (n > 0)
    {   
        term = term * x;
        result = result + term;
        n--;
    }
    
    return(result);
}