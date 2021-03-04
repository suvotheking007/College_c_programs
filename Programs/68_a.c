/*
QUESTION :- Finding factorial of an entered number using a function 
            that takes argument and returns value
*/

#include <stdio.h>

int calculateFactorial(int); //Function declaration or function prototype

void main(void)
{
    int enteredNumber, factorialObtained;

    printf("\n Enter the number whose factorial has to be found :- ");
    scanf("%d", &enteredNumber);

    factorialObtained = calculateFactorial(enteredNumber); //Function call

    printf("\n Factorial of %d is :- %d",enteredNumber ,factorialObtained);

}

int calculateFactorial(int enteredNumber) //Function defination that has the function body
{
    int factorial = 1;

    while (enteredNumber > 0)
    {
        factorial = factorial * enteredNumber;
        enteredNumber--;
    }
    
    return(factorial);
}