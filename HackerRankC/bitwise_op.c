#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
    int arr[n];
    int max_and,max_or,max_xor,and,or,xor;
    for (int i = 1; i <= n; i++) {
        arr[i] = i;
    }


    max_and=0;
    max_or=0;
    max_xor=0;

    for (int i = 0; i<n ;++i) {
        for (int j = i+1; j<=n; ++j) {

            and = arr[i] & arr[j];
            or = arr[i] | arr[j];
            xor = arr[i] ^ arr[j];

            if ((and > max_and)&&(and<k)) {
                max_and = and;
            }
            if ((or > max_or)&&(or<k)) {
                max_or = or;
            }
            if ((xor > max_xor)&&(xor<k)) {
                max_xor = xor;
            }
        }
    }
    printf("%d",max_and);
    printf("\n%d",max_or);
    printf("\n%d",max_xor);
}

int main() {
    int n, k;

    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);

    return 0;
}
