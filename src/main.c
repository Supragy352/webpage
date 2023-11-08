#include <stdlib.h>
#include <stdio.h>

extern char **environ;

int main(int argc, char const **argv, char **envp)
{
    for (int i = 0; environ[i] != NULL; i++) {
        printf("%d: %s\n", i, envp[i]);
    }
 
    return 0;
}