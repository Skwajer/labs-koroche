#include <stdio.h>

int main()
{

    int array[6] = {2, 4, 5, 8, 11, 17};
    int size = sizeof(array) / sizeof(*array);
    int i, k = 0, j, l;
    int new_size = 0;

    for (l = 0; l < size; ++l)
    {
        if (array[l] % 2 == 0)
        {
            new_size += 1;
        }
    }

    int new_array[new_size];

    for (i = 0; i < size; ++i)
    {
        if (array[i] % 2 == 0)
        {
            new_array[k++] = array[i];

        }
    }

    for (j = 0; j < new_size; ++j)
    {
        printf("new_array: %d ", new_array[j]);
    }

    return 0;
}