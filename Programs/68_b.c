/*
QUESTION :- Finding factorial of an entered number using a function 
            that takes argument but does not returns value
*/

#include <stdio.h>

void printFactorial(int); //Function declaration or function prototype

void main(void)
{
    int enteredNumber;
    
    printf("\n Enter the number whose factorial has to be found :- ");
    scanf("%d", &enteredNumber); 

    printFactorial(enteredNumber); //Function call
}

void printFactorial(int enteredNumber) //Function defination that has the function body
{
    int factorial, temp;

    factorial = 1;
    temp = enteredNumber;

    while (enteredNumber > 0)
    {
        factorial = factorial * enteredNumber;
        enteredNumber --;
    }

    printf("\n Factorial of %d is :- %d",temp ,factorial);
}