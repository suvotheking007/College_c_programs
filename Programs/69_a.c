/*
QUESTION :- Check if the entered number is palindrome or not
            using a function that takes argument and returns value
*/

#include <stdio.h>

int palindromeTest(int); 

void main(void)
{
    int enteredNumber, result;
    
    printf("\n Enter the number that has to be tested for being palindrome :- ");
    scanf("%d",&enteredNumber);

    result = palindromeTest(enteredNumber);

    if (result == 1)
    {
        printf("\n %d is a palindrome number ! ", enteredNumber);
    }
    else if(result == 0)
    {
        printf("\n %d is not a palindrome number !", enteredNumber);
    }
    
}

int palindromeTest(int enteredNumber)
{
    int reversed_enteredNumber, temp;

    reversed_enteredNumber = 0;
    temp = enteredNumber;

    while (temp > 0)
    {
        reversed_enteredNumber = reversed_enteredNumber * 10;
        reversed_enteredNumber = reversed_enteredNumber + (temp % 10);
        temp = temp/10;
    }

    if (enteredNumber == reversed_enteredNumber)
    {
        return(1);
    }
    else if(enteredNumber != reversed_enteredNumber)
    {
        return(0);
    }
     
}