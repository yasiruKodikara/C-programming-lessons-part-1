#include <stdio.h>

int main() {
    int n=5;
    for (int i=1; i<=n; i++) {
        printf("\t");
        for (int j=1; j<=i; j++) {
            printf("%c", '#');
        }

        printf("\n");

    }
}
