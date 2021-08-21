#include <stdio.h>
#include <malloc.h>
#include "ReverseWords.h"

/**
 * @brief Test the ReverseWords function
 */
int main()
{
    char *input = "This is a reverse sentence";

    char *reversed = ReverseWords(input);

    printf("%s\n", reversed);

    free(reversed);

    return 0;
}
