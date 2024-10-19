#include <stdio.h>

// #pragma warning(disable:4996)

void swap(int *ptr1, int *ptr2)
{
    int temp;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main()
{
    int a, b, is_correct;
    int *p1, *p2;
    p1 = &a;
    p2 = &b;
    printf("Enter two integer values: ");
    is_correct = scanf("%d %d", &a, &b);
    printf("\nOriginal values: %d, %d", a, b);
    if (is_correct != 2){
        printf("incorrect value");
    }
    swap(p1,  p2);
    printf("\nSwapped values: %d, %d", a, b);

    return 0;
}

