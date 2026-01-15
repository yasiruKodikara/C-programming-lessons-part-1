#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define c 5

int main() {
    int max,n_max;
    int arr[c];

    for (int i=0; i<c; i++) {
        printf("Enter a number: ");
        scanf("%d",&arr[i]);
    }

    max = arr[0];
    for (int i=0;i<c;i++) {
        n_max = max;
        if (max<arr[i]) {
            max = arr[i];
        }

    }

    printf("The maximum number is %d",max);
    printf("\n");
    printf("The next maximum number is %d",n_max);

    return 0;
}