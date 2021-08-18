#include <stdio.h>
#include <string.h>
#include "PrintEnvironment.h"

void PrintEnvironment(char *envp[])
{
    for (int index = 0; envp[index] != NULL; index++)
    {
        // split the string into two parts on the first '='
        char *key = envp[index];
        char *value = strchr(envp[index], '=');
        *value++ = '\0';

        // print the environment variable
        printf("Environment variable \"%s\" has the value \"%s\".\n", key, value);
    }
}
