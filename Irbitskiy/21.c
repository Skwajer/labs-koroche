#include <stdio.h>
#include <ctype.h>

int gorner(char const *str, int base) {

    int result = 0, flag_minus = 0;

    if (str[0] == '-') {
        flag_minus = 1;
        ++str;
    }

    while (*str) {
        result = result * base + (isdigit(*str)
                                  ? *str - '0'
                                  : tolower(*str) - 'a' + 10);

        ++str;
    }
    if (flag_minus)
        result *= -1;

    return result;
}

int main()
{
    int base = 10;
    char *number_str = "-1B10";
    int result;
    printf("%d", gorner(number_str, base));


    return 0;
}