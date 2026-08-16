#include <stdio.h>
#include <stdlib.h>


int main()
{
    char *name = malloc(50 * sizeof(char));
    if (name == NULL)
    {
        return 1;
    }
    printf("What is your name? ");
    scanf("%s", name);
    printf("Hello, %s!\n", name);
    free(name);
    return 0;
}