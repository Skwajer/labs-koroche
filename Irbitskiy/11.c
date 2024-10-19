#include <stdio.h>

int my_strlen(char const *str) {
    int count = 0;
    while (*str)
    {
        ++count;
        ++str;
    }
    return count;
}

int main() {
    char string[] = "YA lychshiy";
    printf("len string = %d", my_strlen(string));

    return 0;
}
