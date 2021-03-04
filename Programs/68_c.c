/*
QUESTION :- Finding factorial of an entered number using a function 
            that does not takes argument but returns value
*/

#include <stdio.h>

int calculateFactorial(void); //Function declaration or function prototype

void main(void)
{
    int factorialObtained;

    factorialObtained = calculateFactorial(); //Function call

    printf(" is :- %d", factorialObtained);
}

int calculateFactorial(void) //Function defination that has function body
{
    int enteredNumber, factorial;

    printf("\n Enter the number whose factorial has to be found :- ");
    scanf("%d", &enteredNumber);

    printf("\n Factorial of %d", enteredNumber);

    factorial = 1;

    while (enteredNumber > 0)
    {
        factorial = factorial * enteredNumber;
        enteredNumber--;
    }
    
    return(factorial);
}