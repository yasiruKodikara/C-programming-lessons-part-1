#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define c 10

int main() {
    int total=0;
    int x;

    for (int i=1;i<=c;i++) {
        printf("Enter %d th number:",i);
        scanf("%d",&x);
        total+=(x*x);
    }
    printf("The Total is: %d",total);


    return 0;
}