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
    printf("Enter an ID number: ");
    scanf("%d", &id);

    // validate ID
    const bool result = ValidateIsraeliId(id);

    // print result
    printf(result ? "ID is valid.\n" : "ID is invalid.\n");

    return 0;
}
