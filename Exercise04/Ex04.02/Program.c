#include <stdio.h>
#include "ReverseWords.h"

int main()
{
    char *input = "This is a reverse sentence";

    char *reversed = ReverseWords(input);

    printf("%s\n", reversed);

    return 0;
}
