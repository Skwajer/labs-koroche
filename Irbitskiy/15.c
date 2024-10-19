#include<stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int i, j, cnt_digit = 0, cnt_alpha = 0, cnt_ostalnoe = 0;
    char *str = "sdgl@#j3!*24jln5";
    for (i = 0; i < strlen(str); ++i)
    {
        if (isdigit(str[i]))
            cnt_digit += 1;
        else if (isalpha(str[i]))
            cnt_alpha += 1;
        else
            cnt_ostalnoe += 1;
    }

    int d = 0, a = 0, o = 0;
    char buf_digit[cnt_digit], buf_alpha[cnt_alpha], buf_ostalnoe[cnt_ostalnoe];

    for (j = 0; j < strlen(str); ++j)
    {
        if (isdigit(str[j]))
        {
            buf_digit[d] = str[j];
            d += 1;
        }
        else if (isalpha(str[j]))
        {
            buf_alpha[a] = str[j];
            a += 1;
        }
        else
        {
            buf_ostalnoe[o] = str[j];
            o += 1;
        }

    }
    buf_alpha[a] = '\0';
    buf_digit[d] = '\0';
    buf_ostalnoe[o] = '\0';
    char *ans = strcat(buf_digit, buf_alpha);
    ans = strcat(ans, buf_ostalnoe);
    printf("sorted string: %s", ans );

    return 0;
}