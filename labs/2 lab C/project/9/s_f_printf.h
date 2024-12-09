#ifndef MAIN_C_TXT_S_F_PRINTF_H
#define MAIN_C_TXT_S_F_PRINTF_H
#include "../../../../libs/errors.h"
#include "../../../../libs/types.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int printf_calling_function(char  **ANSWER_str,char *_format_, va_list);

int over_printf(char const *format, ...);

int over_sprintf(char const *format, ...);

int over_fprintf(char const *format, ...);

#endif //MAIN_C_TXT_S_F_PRINTF_H
