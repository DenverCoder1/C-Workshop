#include "ReverseNumbers.h"
#include <stdio.h>


void ReverseNumbers()
{
    int number;
    // read a number
    printf("Enter a number: ");
    scanf("%d", &number);
    // base case: check if the number is 0
    if (number == 0)
    {
        return;
    }
    // recursive case: call the function again
    ReverseNumbers();
    // print number
    printf("%d\n", number);
}
