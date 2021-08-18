#include <stdio.h>
#include <string.h>
#include "SearchEnvironment.h"

void SearchEnvironment(char *envp[], char *search)
{
    for (int index = 0; envp[index] != NULL; index++)
    {
        // split the string into two parts on the first '='
        char *key = envp[index];
        char *value = strchr(envp[index], '=');
        *value++ = '\0';

        if (StartsWith(key, search))
        {
            printf("Environment variable \"%s\" has the value \"%s\".\n", key, value);
        }
    }
}

bool StartsWith(char *string, char *search)
{
    return strstr(string, search) == string;
}
