#include <stdio.h>

int main()
{

    char name [25];

    printf("what is your name? \n");fflush(stdout);
    scanf("%s", &name);
    printf("Hello %s", name);

}
