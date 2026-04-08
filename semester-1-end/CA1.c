#include <stdio.h>
#define M 2
#define N 3

int main() {
    int X[N],A[M][N],Y[N];

    //getting data into the list X
    for (int i=0; i<N;i++) {
        printf("Enter %d th number:",i+1);
        scanf("%d",&X[i]);
    }
    //print X
    printf("________________________X_______________________\n");
    for (int i = 0;i<N;i++) {
        printf("%d\n",X[i]);
    }

    //getting data into the table A
    for (int i = 0;i<N;i++) {
        for (int j = 0;j<M;j++) {
            printf("Enter value for %d th row and %d th column:",i+1,j+1);
            scanf("%d",&A[i][j]);

        }
        printf("\n");
    }
    printf("________________________A_______________________\n");
    //print the data from table A
    for (int i = 0;i<N;i++) {
        for (int j = 0;j<M;j++) {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }

    //multiplication process
    for (int i = 0;i<N;i++) {
        for (int j = 0;j<M;j++) {
            Y[i] = A[i][j]*X[j];
        }
    }

    //print Y
    printf("________________________Y_______________________\n");
    for (int i = 0;i<N;i++) {
        printf("%d\n",Y[i]);
    }



    return 0;
}