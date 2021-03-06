
/*
 QUESTION :- Write a program to find out the second largest element of an array

 !! CAUTION !! -> This program assumes that the number of values entered by the user
                into the array is more than '2' if incase you entered only one value
                hence there is only one element and there is no other element to compare
                with, on that case the second largest value that the program will give
                is that one value you entered.

 LIMITATIONS -> The array named "array" that has been initialized in this program is an
                integer array of length 100 blocks, hence this array can store upto 100
                elements, however if the user wants to store less than 100 elements than
                the other blocks are of no use but gets registered in the memory and the
                memory thus gets wasted. 
*/


#include <stdio.h>

void main(void)
{   

    /**      VARIABLE GLOSSARY ->
     * 
     * array -> the array where the user given values will get stored
     * numberOfElements -> the total number of elements that will be get stored
     *                     in the array, this is specified by user.
     * largestValue -> largest value among the stored array elements
     * secondLargestValue -> second largest value among the stored array elements
    */
    int array[100], numberOfElements, largestValue, secondLargestValue;


    //------->>>>>>  STEP 1 STARTS <<<<<<---TAKING USER INPUT INTO INITIALIZED ARRAY-------------
    /**
     * Prompting the user to enter the number of elements that has to be present in the array
    */
    printf("\n Enter the number of elements for your array :-");
    scanf("%d", &numberOfElements);

    /**
     * Prompting the user to enter the values that has to be stored as array elements
     * and then,
     * storing the user input values as array elements
    */
    printf("\n Enter %d elements of your array :- ", numberOfElements);
    for (int i = 0; i < numberOfElements; i++)
    {
        scanf("%d", &array[i]);
    }
    //----------->>>>>>  STEP 1 ENDS <<<<<<----------------



    //--------->>>>>>  STEP 2 STARTS <<<<<<-----FINDING THE LARGEST AND SECOND LARGEST ELEMENT-----------
    /**
     * Comparing the first two elements of the array and storing the bigger element
     * in the "largestValue" variable 
     * and the other element in the "secondLargestValue" variable 
    */
    if (array[0] > array[1])
    {
        largestValue = array[0];
        secondLargestValue = array[1];
    }
    else
    {
        secondLargestValue = array[0];
        largestValue = array[1];
    }

    /**
     * Program will continue in this loop only if the number of elements present in 
     * the array is more than 2, 
     * The program continues in this loop and check if each array element (from third
     * element onwards) is bigger than the prevoiusly stored value of "largestValue"
     * and "secondLargest" value or not and at the end of the execution we get the
     * largest and second largest value among the array elements in the variables 
     * "largestValue" and "secondLargestValue".
    */
    for (int i = 2; i < numberOfElements; i++)
    {
        if (array[i] > largestValue)
        {
            secondLargestValue = largestValue;
            largestValue = array[i];
        }
        else if (array[i] > secondLargestValue)
        {
            secondLargestValue = array[i];
        }
    }
    //----------->>>>>>  STEP 2 ENDS <<<<<<----------------



    //----------->>>>>>  STEP 3 STARTS <<<<<<----OUTPUTTING THE VALUE TO USER--------
    /**
     * Output string to the user that prints the second largest value
     * i.e the value stored in the "secondLargestValue" variable
    */
    printf("\n the second largest value is :- %d ", secondLargestValue);
    //----------->>>>>>  STEP 3 ENDS <<<<<<----------------

}