#include<stdio.h>

void main() {
    char digits[5];

    printf("Enter number of digits: ");
    scanf("%s",digits);

    int len = sizeof(digits)/sizeof(digits[0]);

    for (int i=len-1;i>=0;--i) {
        printf("%c",digits[i]);
    }
}