#include <stdio.h>
#include <ctype.h>

char *revers_gorner(int number_10, int new_base, char *res_str)
{
    int i = 0;
    while (number_10)
    {
        int ost = number_10 % new_base;
        res_str[i++] = (ost < 10) ?
                ost + '0' : ost + 'A' - 10;
        number_10 /= new_base;
    }
    res_str[i] = '\0';

    return res_str;
}

int main()
{
    int new_base = 15;
    int number_10 = 101;
    char *result_str[BUFSIZ];
    char *answer = revers_gorner(number_10, new_base, result_str);
    printf("%d in %dcc = %s\n",number_10, new_base, answer);

    return 0;
}