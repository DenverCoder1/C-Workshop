#include "NotQuiteEdges.h"
#include <stdio.h>


int NotQuiteEdges(int *secondSmallest, int *secondLargest)
{
    // declare variables
    int number, smallest, largest;
    // read first number
    smallest = ReadNumber();
    // check if the number is 0
    if (smallest == 0)
    {
        // error, there is no second smallest number
        return -1;
    }
    // initialize variables
    largest = smallest;
    // read second number
    number = ReadNumber();
    // check if the number is larger than the first number
    if (number > largest)
    {
        // initialize second largest and second smallest
        *secondLargest = largest;
        largest = number;
        *secondSmallest = number;
    }
    else
    {
        // initialize second largest and second smallest
        *secondLargest = number;
        smallest = number;
        *secondSmallest = largest;
    }
    // read numbers until 0 is entered
    while (true)
    {
        // read number
        number = ReadNumber();
        // check if number is 0
        if (number == 0)
        {
            break;
        }
        // check if number is smaller than the current smallest
        if (number <= smallest)
        {
            // if so, set the smallest to the number
            *secondSmallest = smallest;
            smallest = number;
        }
        // check if number is smaller than the current secondSmallest
        else if (number < *secondSmallest)
        {
            // if so, set the secondSmallest to the number
            *secondSmallest = number;
        }
        // check if number is larger than the current largest
        if (number >= largest)
        {
            // if so, set the largest to the number
            *secondLargest = largest;
            largest = number;
        }
        // check if number is larger than the current secondLargest
        else if (number > *secondLargest)
        {
            // if so, set the secondLargest to the number
            *secondLargest = number;
        }
    }
    // return 0
    return 0;
}

int PrintNotQuiteEdges()
{
    // declare variables
    int secondSmallest, secondLargest;
    // call the function
    int result = NotQuiteEdges(&secondSmallest, &secondLargest);
    // check if there was an error
    if (result < 0)
    {
        return result;
    }
    // print the results
    printf("The second smallest number is %d\n", secondSmallest);
    printf("The second largest number is %d\n", secondLargest);
    // return 0
    return 0;
}

int ReadNumber()
{
    // declare variables
    int number;
    // read number
    printf("Enter a number: ");
    scanf("%d", &number);
    // return the number
    return number;
}
