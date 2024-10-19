#include <stdio.h>
#define SZ1_1  3
#define SZ1_2  3
#define SZ2_1  3
#define SZ2_2  3

void print_matrix(int matrix[3][3])
{
    int i, j;
    for (i = 0; i < 3; ++i)
    {
        for (j = 0; j < 3; ++j)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int matrix1[SZ1_1][SZ1_2] = { {34, 0, 8},
                                  {5, 4, 11},
                                  {2, 76, 14}};

    int matrix2[SZ2_1][SZ2_2] = { {2, 81, 8},
                                  {23, 5, 10},
                                  {16, 12, 7}};
    int new_matrix[SZ2_1][SZ2_2];

    if (SZ1_2 != SZ2_1)
    {
        printf("Перемножение матриц невозможно!");
        return 0;
    }

    int i, j, t, new_elem = 0;
    for (i = 0; i < SZ1_1; ++i)
    {
        for (t = 0; t < SZ2_2; ++t)
        {
            for (j = 0; j < SZ1_2; ++j)
            {
                new_elem += (matrix1[i][j] * matrix2[j][t]);

            }
            new_matrix[i][t] = new_elem;
            new_elem = 0;
        }
    }

    print_matrix(new_matrix);

    return 0;
}