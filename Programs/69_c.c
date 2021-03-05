/*
QUESTION :- Check if the entered number is palindrome or not
            using a function that does not takes argument but returns value
*/

#include <stdio.h>

int palindromeTest(void);

void main(void)
{
    int result;

    result = palindromeTest();

    if (result == 1)
    {
        printf(" is a palindrome number !");
    }
    else if (result == 0)
    {
        printf(" is not a palindrome number !");
    }
}

int palindromeTest(void)
{
    int enteredNumber, reversed_enteredNumber, temp;

    printf("\n Enter the number that has to be tested for being palindrome :- ");
    scanf("%d", &enteredNumber);

    reversed_enteredNumber = 0;
    temp = enteredNumber;

    while (temp > 0)
    {
        reversed_enteredNumber = reversed_enteredNumber * 10;
        reversed_enteredNumber = reversed_enteredNumber + (temp % 10);
        temp = temp / 10;
    }

    printf("\n %d", enteredNumber);

    if (enteredNumber == reversed_enteredNumber)
    {
        return(1);
    }
    else if (enteredNumber != reversed_enteredNumber)
    {
        return(0);
    }
}