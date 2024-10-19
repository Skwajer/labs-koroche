#include <stdio.h>

char *my_strstr(char const* str, char* sub_str)
{
    if (*sub_str == '\0')
        return (char *)str;

    while (*str != '\0')
    {
        while (*str != '\0' && *sub_str == *str)
        {
            str++;
            sub_str++;
        }

        if (*sub_str == '\0')
        {
            return (char *)str;
        }
        str++;
    }
    return NULL;
}

int main()
{
    char string[] = "This is a German";
    char sub_string[] = "is";
    printf("%s", my_strstr(string, sub_string));
    return 0;
}
