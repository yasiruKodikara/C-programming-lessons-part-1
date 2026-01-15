#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define c 10

int main() {
    int arr[c];
    int e_c = 0;
    int o_c = 0;

    for (int i=0; i<c; i++) {
        printf("Enter a number: ");
        scanf("%d",&arr[i]);
    }

    //printing negetive numbers
    for (int i=0;i<c;i++) {
        if (arr[i]%2==0) {
            e_c+=1;
            continue;
        }
        o_c+=1;
    }
    printf("The count of even numbers = %d",e_c);
    printf("\nThe count of odd numbers = %d",o_c);

    return 0;
}