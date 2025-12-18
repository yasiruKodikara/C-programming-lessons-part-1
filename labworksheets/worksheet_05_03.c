#include <stdio.h>
#define rows 3
#define cols 3
int main() {
    int matrix[rows][cols] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    int transposed[rows][cols];

    printf("the given matrix:\n");
    for (int row = 0; row < rows; row++) {
        for (int col = 0; col < cols; col++) {
            printf("%d ",matrix[row][col]);
        }
        printf("\n");
    }


    for (int row = 0; row < rows; row++) {
        for (int col = 0; col < cols; col++) {
            transposed[row][col] = matrix[col][row];
        }
        printf("\n");
    }

    printf("the transposed matrix:\n");
    for (int row = 0; row < rows; row++) {
        for (int col = 0; col < cols; col++) {
            printf("%d ",transposed[row][col]);
        }
        printf("\n");
    }






    return 0;
}