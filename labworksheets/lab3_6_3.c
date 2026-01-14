#include <stdio.h>
int main() {
    int x;

    printf("Enter depth:");
    scanf("%d",&x);

    for (int i = x,k=0;k<=x,i>0;k++,i--) {
        for (int l= 0;l<=k;l++) {
            printf(" ");
        }
        for (int j = 1;j<=i;j++) {


            printf("*");
        }
        printf(" ");
        printf("\n");

    }
    return 0;
}