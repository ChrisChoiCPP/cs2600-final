#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
    //load config files, if any.

    //run command loop.
    lsh_loop();

    //Perform any shutdown/cleanup.

    return EXIT_SUCCESS;
}