#include <stdio.h>
#define ROW 3
#define COL 3
int main() {
    int arr1[ROW][COL] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int arr2[ROW][COL];



    printf("Original\n");
    for (int i=0;i<ROW;i++) {
        for (int j=0;j<COL;j++) {
            printf("%d ",arr1[i][j]);
        }
        printf("\n");
    }

    for (int i=0;i<ROW;i++) {
        for (int j=0;j<COL;j++) {
            arr2[i][j]=arr1[j][i];
        }
    }

    printf("Trnasposed\n");
    for (int i=0;i<ROW;i++) {
        for (int j=0;j<COL;j++) {
            printf("%d ",arr2[i][j]);
        }
        printf("\n");
    }


    return 0;
}