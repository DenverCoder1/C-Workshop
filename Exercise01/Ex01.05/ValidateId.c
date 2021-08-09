#include "ValidateId.h"
#include <math.h>

bool ValidateIsraeliId(const int id)
{
    // check that the length is between 0 and ID_MAX_LENGTH
    if (id < 0 || id >= pow(10, ID_MAX_LENGTH))
    {
        return false;
    }
    // running weighted sum
    int weightedSum = 0;
    // remaining id
    int remainingId = id;
    // loop through each digit in id
    for (int i = ID_MAX_LENGTH; i > 0; i--)
    {
        // isolate last digit
        int lastDigit = remainingId % 10;
        // remove last digit
        remainingId /= 10;
        // weight is 2 if index is even or 1 if odd
        int weight = (i % 2 == 0) ? 2 : 1;
        // add sum of digits in weighted num to a overall sum
        weightedSum += sumOfDigits(lastDigit * weight);
    }
    // check that weighted sum is divisible by 10
    return (weightedSum % 10 == 0);
}

int sumOfDigits(int number)
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
