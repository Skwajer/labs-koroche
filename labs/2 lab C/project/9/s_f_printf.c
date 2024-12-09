#include "s_f_printf.h"



int printf_calling_function(char  **ANSWER_str,char *_format_, va_list vaList_args)
{
    size_t len_format_, capacity = BUFSIZ;
    int current_format_index = 0, current_ANSWER_str_index = 0;
    char *temp_ans_str = NULL, *s_ans = NULL;
    int error;


    len_format_ = strlen(_format_);

    temp_ans_str = malloc(capacity * sizeof(char));
    if (temp_ans_str == NULL)
        return MEMORY_ALLOCATION_ERROR;


    while (current_format_index <= len_format_)
    {

            capacity *= 2;

        if (*_format_ == '%')
        {
            switch(*(_format_ + 1))
            {
                case 'd':
                    error = citoa(va_arg(vaList_args, int), 10, &s_ans);
                    if (error)
                    {
                        free(temp_ans_str);
                        temp_ans_str = NULL;
                        return INVALID_PARAMETER;
                    }
                    memcpy(*ANSWER_str + current_ANSWER_str_index, s_ans, strlen(s_ans));
                    current_ANSWER_str_index += strlen(s_ans);
                    free(s_ans);
                    s_ans = NULL;
                    _format_ += 2;
                    current_format_index += 2;
                    break;

                case 'u':
                    error = cutoa(va_arg(vaList_args, unsigned int), 10, &s_ans);
                    if (error)
                    {
                        free(temp_ans_str);
                        temp_ans_str = NULL;
                        return INVALID_PARAMETER;
                    }
                    memcpy(*ANSWER_str + current_ANSWER_str_index, s_ans, strlen(s_ans));
                    current_ANSWER_str_index += strlen(s_ans);
                    free(s_ans);
                    s_ans = NULL;
                    _format_ += 2;
                    current_format_index += 2;
                    break;

                case 'f':



            }
        }
    }



    free(temp_ans_str);
    return OK;
}