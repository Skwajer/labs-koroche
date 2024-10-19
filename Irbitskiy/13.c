#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char string[10] = "helloworld";
    char *ptr = string;
    int i;

    for(i = 0; i < strlen(string); ++i)
    {
        if (i % 2 != 0)
        {
            *ptr = toupper(*ptr);
        }

        printf("%c", *ptr++);
    }

    return 0;
}