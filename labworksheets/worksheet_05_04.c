#include <stdio.h>
#define rows 3
#define cols 3
int main() {
    int matrix[rows][cols] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    int mainDiagonalTotal,minorDiagonalTotal;

    printf("the given matrix:\n");
    for (int row = 0; row < rows; row++) {
        for (int col = 0; col < cols; col++) {
            printf("%d ",matrix[row][col]);
        }
        printf("\n");
    }

    for (int row = 0; row < rows; row++) {
        for (int col = 0; col < cols; col++) {
            if (row == col) {
                mainDiagonalTotal += matrix[row][col];
            }
        }

    }

    for (int row = 0, c = cols-1; row < rows; c--,row++) {
        for (int col = cols-1; col >= 0; col--) {
            if (col==c) {
                minorDiagonalTotal += matrix[row][col];
            }

        }

    }

    printf("the sum of values in main diagonal:%d \n",mainDiagonalTotal);
    printf("the sum of values in minor diagonal:%d \n",minorDiagonalTotal);






    return 0;
}