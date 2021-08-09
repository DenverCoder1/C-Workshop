#include "ValidateId.h"
#include <stdio.h>
#include <stdbool.h>

/**
 * @brief Test validation of ID
 */
int main(void)
{
    // read ID
    int id;
    printf("Enter an ID number (first 8 digits): ");
    scanf("%d", &id);

    // validate ID
    const int result = ComputeCheckDigit(id);

    // print result
    printf("Check digit is %d\n", result);

    return 0;
}
