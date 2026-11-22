#include <stdio.h>
#include <string.h>

int main()
{
    char name[100];

    printf("Enter your name: ");
    scanf("%99s", name);

    printf("Length = %d", (int)strlen(name));

    return 0;
}
