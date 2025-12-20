#include <stdio.h>
#define n 3
#define m 3

void main() {
    int A[m][n];
    int X[m];

    int Y[n];
    for (int i=0 ; i<m;++i) {
        Y[i] = 0;
    }
    printf("\n");
    //Reading table A
    for (int i =0; i<m;++i) {
        for (int j=0; j<n;++j) {
            printf("Enter value for table A, %d th row and %d th column:",i,j);
            scanf("%d",&A[i][j]);
        }
    }

    //Reading list X
    for (int i=0;i<m;++i) {
        printf("Enter value for list X, %d th index",i);
        scanf("%d",&X[i]);
    }

    //print the table
    printf("The Table A: \n");
    for (int i=0;i<m;++i) {
        for (int j=0; j<n;++j) {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    //print the list X
    printf("The List X: \n");
    for (int k=0;k<m;++k) {
        printf("%d ",X[k]);
    }



    //constricting the list Y
    for (int i=0 ; i<m;++i) {
        for (int j=0; j<n;++j) {
            Y[i]+=A[i][j]*X[j];

        }

    }

    printf("\n");
    //printing the list Y
    printf("List Y:\n");
    for (int i=0 ; i<m;++i) {
        printf("%d ",Y[i]);
    }
}