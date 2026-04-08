#include<stdio.h>

int main() {

    for (int i=1;i<=5;i++) {
        for (int j=1;j<=i;j++) {
            printf("%d",j);
        }
        printf("\n");
    }

    printf("\n");

    for (int i=1;i<=5;i++) {
        for (int j=1;j<=i;j++) {
            printf("%d",i);
        }
        printf("\n");
    }

    printf("\n");

    for (int i=5;i>=0;i--) {
        for (int k=1;k>=i;k++) {
            printf(" ");
        }
        for (int j=1;j<=i;j++) {
            printf("%c",'*');
        }
        printf("\n");
    }
    return 0;
}