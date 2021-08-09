#include "ValidateId.h"
#include <math.h>

int ComputeCheckDigit(int remainingId)
{
    // running weighted sum
    int weightedSum = 0;
    // loop through each digit in id
    for (int i = ID_MAX_LENGTH - 1; i > 0; i--)
    {
        // isolate last digit
        int lastDigit = remainingId % 10;
        // remove last digit
        remainingId /= 10;
        // weight is 2 if index is even or 1 if odd
        int weight = (i % 2 == 0) ? 2 : 1;
        // add sum of digits in weighted num to a overall sum
        weightedSum += SumOfDigits(lastDigit * weight);
    }
    // return 10 minus last digit in sum, or 0 if last digit is 0
    return (10 - (weightedSum % 10)) % 10;
}

int SumOfDigits(int number)
{
    int sum = 0;
    // loop through each digit in number
    while (number > 0)
    {
        // add last digit to sum
        sum += number % 10;
        // remove last digit
        number /= 10;
    }
    return sum;
}
