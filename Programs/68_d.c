/*
QUESTION :- Finding factorial of an entered number using a function 
            that nither takes argument nor returns value
*/

#include <stdio.h>

void printFactorial(void); //Function declaration or function prototype

void main(void)
{   

    printFactorial(); //Function call

}

void printFactorial(void) //Function defination that has the function body
{
    int enteredNumber, result;

    printf("\n Enter the number whose factorial has to be found :- ");
    scanf("%d", &enteredNumber);

    printf("\n The factorial of %d", enteredNumber);

    result = 1;

    while (enteredNumber > 0)
    {
        result = result * enteredNumber;
        enteredNumber--;
    }

    printf(" is :- %d",result);
    
}