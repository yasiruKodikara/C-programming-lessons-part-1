#include <stdio.h>
#define str_len 13
int main() {

    char str[str_len]="CProgramming";

    for (int i=0;i<str_len;i++) {

        for (int j=0;j<i;j++) {
            printf("%c",str[j]);
        }
        printf("\n");
    }

    return 0;
}