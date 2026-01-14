#include <stdio.h>
int main() {
    int sum=0,x=0,digit;
    char digits[5];


    printf("Enter a number: ");
    scanf("%s",digits);

    for (int i=0;digits[i] != '\0';i++) {
        x = (int)(digits[i] - '0');
        sum=sum+x;
    }
    printf("sum=%d",sum);

    return 0;
}