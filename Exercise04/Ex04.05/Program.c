#include "SearchEnvironment.h"

/**
 * @brief Test the search environment function
 */
int main(int argc, char *argv[], char *envp[])
{
    // get search from first argument
    char *search = argc > 1 ? argv[1] : "";

    SearchEnvironment(envp, search);

    return 0;
}
