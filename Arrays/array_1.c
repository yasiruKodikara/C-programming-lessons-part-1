#include <stdio.h>
void main() {
    int n;
    float sum,avg,d;
    printf("Give the number of inputs:");
    scanf("%d",&n);
    float arr[n];
    for (int i = 0; i<n; i++) {
        scanf("%f",&arr[i]);
        sum += arr[i];

    }
    avg = sum/n;
    for (int i = 0; i<n; i++) {
        d = arr[i] - avg;
        printf("  D of %d is %.2f\n",i,d);
    }

}