#include <stdio.h>
#include <string.h>

char *my_strcat(char *dest, const char *src) {
    // Находим конец строки-приемника
    char *end = dest;
    while (*end != '\0') {
        end++;
    }

    // Копируем символы из строки-источника
    while (*src != '\0') {
        *end = *src;
        end++;
        src++;
    }

    // Добавляем символ конца строки
    *end = '\0';

    // Возвращаем указатель на начало строки-приемника
    return dest;
}

int main()
{
    char str1[] = {'B', 'a', 'B', '_', 0, 0, 0, 0, 0};
    char str2[] = "Barabarabara";
    printf("%s", my_strcat(str1, str2));

    return 0;
}