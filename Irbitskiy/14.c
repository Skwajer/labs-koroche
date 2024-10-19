#include <stdio.h>
#include <ctype.h>


int main()
{
    FILE *file = fopen("C:/Users/golds/OneDrive/Dekstop/14file.txt", "r");
    if (file == NULL)
        return 1;

    int buf_1, count_numbers = 0;

    while (fscanf(file, "%d", &buf_1) == 1) {
        ++count_numbers;
    }

    int arr[count_numbers];

    count_numbers = 0;
    while (fscanf(file, "%d", &arr[count_numbers]) == 1)
    {
        ++count_numbers;
    }

    int i;
    int mx_arr = -100000, mn_arr = 100000050;

    for (i = 0; i < count_numbers+1; ++i)
    {
        if (mx_arr < arr[i])
            mx_arr = arr[i];

        if (mn_arr > arr[i])
            mn_arr = arr[i];
    }

    printf("%d %d", mn_arr, mx_arr);

    return 0;
}