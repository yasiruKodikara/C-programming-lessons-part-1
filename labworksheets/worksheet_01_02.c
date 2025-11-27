#include <stdio.h>

void main() {
    char da[4];
    int length = sizeof(da);

    scanf("%s",da);

    for (int i=3;i>=0;i--) {
        printf("%c",da[i]);
    }
}
