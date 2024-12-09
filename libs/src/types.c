#include "errors.h"
#include <malloc.h>
#include <math.h>
#include <ctype.h>

int dec_float_to_a(float num, char **ans)
{
    int base = 10;
    int len, digit, i;

        if (num == 0.0)
        {
            *ans = (char *)malloc(4 * sizeof(char));
            if (*ans == NULL)
            {
                return MEMORY_ALLOCATION_ERROR;
            }
            (*ans)[0] = '0';
            (*ans)[1] = '.';
            (*ans)[2] = '0';
            (*ans)[3] = '\0';
            return OK;
        }

        len = floor(log(num) / log(base)) + 1;

        *ans = (char *)malloc((len + 1) * sizeof(char));
        if (*ans == NULL)
            return MEMORY_ALLOCATION_ERROR;

        char *temp_ptr = *ans;
        temp_ptr = temp_ptr + len;
        *temp_ptr = '\0';
        temp_ptr--;
        while(num)
        {
            digit = num % base;
            num /= base;
            if (digit > 9) {
                *temp_ptr = toupper(digit) + 'A' - 10;
            } else {
                *temp_ptr = digit + '0';
            }
            temp_ptr--;
        }
        return OK;

}

int cutoa(unsigned int num, int base, char **ans)
{
    int len, digit, i;
    if (base < 2 || base > 36)
        return INVALID_PARAMETER;

    if (num == 0)
    {
        *ans = (char *)malloc(2 * sizeof(char));
        if (*ans == NULL)
        {
            return MEMORY_ALLOCATION_ERROR;
        }
        (*ans)[0] = '0';
        (*ans)[1] = '\0';
        return OK;
    }

    len = floor(log(num) / log(base)) + 1;

    *ans = (char *)malloc((len + 1) * sizeof(char));
    if (*ans == NULL)
        return MEMORY_ALLOCATION_ERROR;

    char *temp_ptr = *ans;
    temp_ptr = temp_ptr + len;
    *temp_ptr = '\0';
    temp_ptr--;
    while(num)
    {
        digit = num % base;
        num /= base;
        if (digit > 9) {
            *temp_ptr = toupper(digit) + 'A' - 10;
        } else {
            *temp_ptr = digit + '0';
        }
        temp_ptr--;
    }
    return OK;
}

int citoa(int num, int base, char **ans)
{
    int is_negative = 0, len, digit, i;
    if (base < 2 || base > 36)
        return INVALID_PARAMETER;

    if (num == 0)
    {
        *ans = (char *)malloc(2 * sizeof(char));
        if (*ans == NULL)
        {
            return MEMORY_ALLOCATION_ERROR;
        }
        (*ans)[0] = '0';
        (*ans)[1] = '\0';
        return OK;
    }

    if (num < 0)
    {
        num = abs(num);
        is_negative = 1;
    }


    len = floor(log(num) / log(base)) + 1 + is_negative;

    *ans = (char *)malloc((len + 1) * sizeof(char));
    if (*ans == NULL)
        return MEMORY_ALLOCATION_ERROR;

    char *temp_ptr = *ans;
    if (is_negative)
    {
        *temp_ptr = '-';
    }
    temp_ptr = temp_ptr + len;
    *temp_ptr = '\0';
    temp_ptr--;
    while(num)
    {
        digit = num % base;
        num /= base;
        if (digit > 9) {
            *temp_ptr = toupper(digit) + 'A' - 10;
        } else {
            *temp_ptr = digit + '0';
        }
        temp_ptr--;
    }
    return OK;
}

int catoi(char const *str, int base, int *ans) {
    int num = 0;
    int digit = 0;
    int minus = 0;

    if (str == NULL || ans == NULL) {
        return UNEXPECTED_NULL_PTR;
    }

    if (*str == '-') {
        minus = 1;
        str++;
    }

    while (*str) {
        if (isalpha(*str)) {
            digit = tolower(*str) - 'a' + 10;
        } else if (isdigit(*str)) {
            digit = *str - '0';
        }
        num = num * base + digit;
        str++;
    }

    *ans = minus ? -num : num;

    return OK;
}

