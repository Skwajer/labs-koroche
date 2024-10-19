// Задание: 2. Реализовать алгоритм “переворота” (reverse) символьной строки
#include <stdio.h>

void reverse(const char *s ,int len_s)
{

    int i;

    for(i = len_s; i >= 0; --i)
    {
        printf("%c", s[i]);
    }
}

int main()
{
    char str[10] = "german123";
    int len_str = sizeof(str) / sizeof(*str);
    reverse(str, len_str);

    return 0;
}