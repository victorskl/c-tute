#include <stdio.h>

int main(int argc, const char* argv[])
{
    // argc = argument count
    printf("argument count (argc): %d\n", argc);

    // argv = argument value
    int i;
    for(i = 0; i < argc; i++)
    {
        printf("argv[%d]: %s\n", i, argv[i]);
    }

    return 0;
}
