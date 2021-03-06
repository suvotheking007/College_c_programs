/*
QUESTION :- Write a program to calculate the Finite Geometric Series 
            i.e. :- 1 + x + x^2 + x^3 + ...... + x^n
            using function that takes argument but does not returns value
*/

#include <stdio.h>

void printFiniteGeometricSeries(int, int);

void main(void)
{
    int x, n;

    printf("\n Enter the value of \"x\" and \"n\" :- ");
    scanf("%d %d", &x, &n);

    //Forming the first part (The value .... is :-) of the output string
    printf("\n The value of Finite Geometric Series -> 1 + %d", x);
    for (int i = 2; i <= n; i++)
    {
        printf(" + %d^%d", x, i);
    }
    printf(" is :- ");

    printFiniteGeometricSeries(x, n);
}

void printFiniteGeometricSeries(int x, int n)
{
    int term, result;

    //Evaluation of the series and geting the resultant value in the variable "result"
    term = result = 1;
    while (n > 0)
    {   
        term = term * x;
        result = result + term;
        n --;
    }

    //Forming the last part (the result given after ":-") of the output string
    printf("%d.", result);
    
}