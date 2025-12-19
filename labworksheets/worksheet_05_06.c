#include <stdio.h>
#define rows 3
#define cols 3
int main() {
    int matrix[rows][cols] = {
        {4,9,2},
        {3,5,7},
        {8,1,6}
    };

    int mainDiagonalTotal,minorDiagonalTotal,rowsTotal,colsTotal,item1,item2,item3;

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

    for (int i=0;i<rows;i++) {
        for (int j=0;j<cols;j++) {
            rowsTotal+=matrix[i][j];
        }

        printf("\n");
    }

    for (int i=0;i<rows;i++) {

        item1+=matrix[i][0];
        item2+=matrix[i][1];
        item3+=matrix[i][2];


        printf("\n");
    }

    colsTotal = item1 + item2 + item3;



    printf("the sum of values in main diagonal:%d \n",mainDiagonalTotal);
    printf("the sum of values in minor diagonal:%d \n",minorDiagonalTotal);


    if ((rowsTotal==colsTotal)&&(colsTotal==mainDiagonalTotal)&&(mainDiagonalTotal==minorDiagonalTotal)) {
        printf("Magic square matrix");
    }



    return 0;
}
