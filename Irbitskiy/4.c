#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));

    int array[10];
    int i, j, k;
    int mx_arr = 0, mn_arr = 0;
    int index_mx_arr, index_mn_arr;

    for(i = 0; i < 10; ++i)
    {
        array[i] = rand() % 20000 - 10000;
    }

    for(j = 0; j < 10; ++j)
    {
        printf("%d ", array[j]);
        if (mn_arr > array[j]) {
            mn_arr = array[j];
            index_mn_arr = j;
        }

        if (mx_arr < array[j]) {
            mx_arr = array[j];
            index_mx_arr = j;
        }
    }
    printf("\nmn_arr = %d mx_arr = %d\n", mn_arr, mx_arr);
    printf("min_ar_index = %d mx_arr_index = %d\n", index_mn_arr, index_mx_arr);
    for(k = 0; k < 10; ++k)
    {

    }

    return 0;
}