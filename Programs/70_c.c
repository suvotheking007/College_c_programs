/*
QUESTION :- Write a program to calculate the Finite Geometric Series 
            i.e. :- 1 + x + x^2 + x^3 + ...... + x^n
            using function that does not takes argument but returns value
*/

#include <stdio.h>

int calculateFiniteGeometricSeries(void);

void main(void)
{
    int result;

    result = calculateFiniteGeometricSeries();

    //Forming the last part (the result given after ":-") of the output string
    printf(" %d.", result);
}

int calculateFiniteGeometricSeries(void)
{
    int x, n, term, result;

    printf("\n Enter the value of \"x\" and \"n\" :- ");
    scanf("%d %d", &x, &n);

    //Forming the first part (The value .... is :-) of the output string
    printf("\n The value of the finite geometric series -> 1 + %d", x);
    for (int i = 2; i <= n; i++)
    {
        printf(" + %d^%d", x, i);
    }
    printf(" is :-");

    //Evaluation of the series and geting the resultant value in the variable "result"
    term = result = 1;
    while (n > 0)
    {
        term = term * x;
        result = result + term;
        n--;
    }

    return(result);
}
