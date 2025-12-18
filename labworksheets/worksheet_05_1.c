#include<stdio.h>
#define rows 3
#define cols 3

int main() {
    int table1[rows][cols];
    int table2[rows][cols];
    int table3[rows][cols];

    printf("Enter the data for table1\n");
    for (int i =0; i<rows;++i) {
        for (int k = 0;k<cols;++k) {
            printf("Enter the %dth row and %dth column data for table1:",i,k);
            scanf("%d", &table1[i][k]);
        }
    }
    printf("\n");

    printf("Enter the data for table2\n");
    for (int i =0; i<rows;++i) {
        for (int k = 0;k<cols;++k) {
            printf("Enter the %dth row and %dth column data for table2:",i,k);
            scanf("%d", &table2[i][k]);
        }
    }

    for (int i = 0;i<rows;++i) {
        for (int k = 0;k<cols;++k) {
            table3[i][k] = table1[i][k]+table2[i][k];
        }
    }

    printf("the table1 is\n");
    for (int i =0; i<rows;++i) {
        for (int k = 0;k<cols;++k) {
            printf("%d ", table1[i][k]);
        }
        printf("\n");
    }
    printf("\n");

    printf("the table 2 is\n");
    for (int i =0; i<rows;++i) {
        for (int k = 0;k<cols;++k) {
            printf("%d ", table2[i][k]);
        }
        printf("\n");
    }

    printf("the table 3 is\n");
    for (int i = 0;i<rows;++i) {
        for (int k = 0;k<cols;++k) {
            printf("%d ", table3[i][k]);
        }
        printf("\n");
    }



    return 0;
}