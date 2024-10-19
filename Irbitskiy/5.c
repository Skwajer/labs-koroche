#include <stdio.h>

int bin_search(int const *arr, int value, int ln_ar)
{
    int low = 0, high = ln_ar - 1;
    int mid;

    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == value)
            return mid;

        else if (value > arr[mid])
            low = mid + 1;

        else
            high = mid - 1;
    }

    return -100;



}

int main()
{
    int arr[6] = {-1, 5, 9, 35, 37, 90};
    int element, n = sizeof(arr) / sizeof(*arr);

    printf("Введите значение, индекс которого нужно найти: ");
    scanf("%d", &element);

    if (bin_search(arr, element, n) < 0)
    {
        printf("Такого элемента нет в arr");
    }
    else
        printf("Индекс нужного элемента = %d", bin_search(arr, element, n));

    return 0;
}