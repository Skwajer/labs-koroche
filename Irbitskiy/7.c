#include <stdio.h>

int main()
{

    int array[6] = {2, 4, 5, 1, 11, 17};
    int size = sizeof(array) / sizeof(*array);
    int new_array[size / 2];
    int i, k = 0, j;

    for (i = 0; i < size; ++i)
    {
        if (i % 2 == 1)
        {
            new_array[k++] = array[i];

        }
    }

    for (j = 0; j < (size / 2); ++j)
    {
        printf("new_array: %d ", new_array[j]);
    }

    return 0;
}