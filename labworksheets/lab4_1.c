#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define c 10

int main() {
    int arr[c];

    for (int i=0; i<c; i++) {
        printf("Enter a number: ");
        scanf("%d",&arr[i]);
    }

    //printing negetive numbers
    for (int i=0;i<c;i++) {
        if (arr[i]<0) {
            printf("%d ",arr[i]);
        }
    }

    return 0;
}