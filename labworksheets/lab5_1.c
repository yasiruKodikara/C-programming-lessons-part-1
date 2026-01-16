#include<stdio.h>
#define ROW 3
#define COL 3
void main() {
    int arr1[ROW][COL];
    int arr2[ROW][COL];
    int arr3[ROW][COL];

    for (int i=0;i<ROW;i++) {
        for (int j = 0;j<COL;j++) {
            printf("Enter element for table 1: ");
            scanf("%d",&arr1[i][j]);

        }
    }

    for (int i=0;i<ROW;i++) {
        for (int j = 0;j<COL;j++) {
            printf("Enter element for table 2: ");
            scanf("%d",&arr2[i][j]);

        }
    }

    for (int i=0;i<ROW;i++) {
        for (int j = 0;j<COL;j++) {
            arr3[i][j] = arr1[i][j] + arr2[i][j];

        }
    }
    for (int i=0;i<ROW;i++) {
        for (int j = 0;j<COL;j++) {
            printf("%d ",arr3[i][j]);

        }
        printf("\n");
    }
}