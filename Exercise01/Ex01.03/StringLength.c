#include "StringLength.h"


size_t StringLength(const char *input)
{
    // initialize a counter
    size_t stringLength = 0;
    // iterate through the string
    // while incrementing the counter
    while (*input++ != '\0')
        stringLength++;
    // return the counter
    return stringLength;
}
