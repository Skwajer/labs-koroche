#include <stdio.h>

// #pragma warning(disable:4996)

int main()
{
    int temp;

    int array[4] = {7, 0, 11, 5};
    for (int i = 0; i < ((sizeof(array) / sizeof *array) - 1); ++i) {
        for (int j = 0; j < (sizeof(array) / sizeof *array - i) - 1; ++j) {
            if (array[j] > array[j + 1]) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;

            }
        }
    }
    for (int i = 0; i < (sizeof(array) / sizeof *array); ++i)
        printf("%d ", array[i]);
    return 0;
}
