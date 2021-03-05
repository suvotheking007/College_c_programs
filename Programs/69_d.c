/*
QUESTION :- Check if the entered number is palindrome or not
            using a function that that nither takes argument nor returns value
*/

#include <stdio.h>

void printPalindromeTest(void);

void main(void)
{
    printPalindromeTest();
}

void printPalindromeTest(void)
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

    if (enteredNumber == reversed_enteredNumber)
    {
        printf("\n %d is a palindrome number !", enteredNumber);
    }
    else if (enteredNumber != reversed_enteredNumber)
    {
        printf("\n %d is not a palindrome number !", enteredNumber);
    }
}
