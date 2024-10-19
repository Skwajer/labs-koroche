#include <stdio.h>

#define SIZE 5

void trnspnd_matrix(int matrix[SIZE][SIZE])
{
    int i, j, temp;
    for (i = 0; i < SIZE; ++i)
    {
        for (j = i+1; j < SIZE; ++j)
        {
            temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
}

void print_matrix(int matrix[SIZE][SIZE])
{
    int i, j;
    for (i = 0; i < SIZE; ++i)
    {
        for (j = 0; j < SIZE; ++j)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix[SIZE][SIZE] = { {34, 0, 8, 6, 10},
                               {5, 4, 11, 12, 1},
                               {2, 76, 9, 18, 14},
                               {7, 76, 82, 84, 24},
                               {35, 33, 43, 132, 104}};

    printf("Original matrix = \n");
    print_matrix(matrix);
    puts("\n");
    trnspnd_matrix(matrix);
    printf("Transposed matrix = \n");
    print_matrix(matrix);

    return 0;
}
