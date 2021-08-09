#include "StringLength.h"


size_t StringLength(const char *input)
{
    size_t stringLength = 0;
    while (*input++ != '\0')
        stringLength++;
    return stringLength;
}
