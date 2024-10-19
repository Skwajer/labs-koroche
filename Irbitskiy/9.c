#include <stdio.h>

int main()
{
    double arr[] = {1.2 , 4.5, 7.3, 2.9, 4.5, 4.0};
    int j, i, k;
    int size_arr = sizeof(arr) / sizeof(*arr);
    double unique_arr[size_arr];
    int pos_unique_arr = 0;


    for (i = 0; i < size_arr; ++i) {
        int flag = 0;

        for (j = 0; j < pos_unique_arr; ++j) {
            if (arr[i] == unique_arr[j]) {
                flag = 1;
                break;
            }

        }
        if (!flag) {
            unique_arr[pos_unique_arr++] = arr[i];
        }
    }
    printf("unique values:\n");
    for (k = 0; k < pos_unique_arr; ++k)
    {
        printf("%.2f ", unique_arr[k]);
    }

    return 0;
}