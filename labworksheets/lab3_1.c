#include<stdio.h>
#include<stdlib.h>

int main() {

    int x,y=1,n;

    printf("Enter X:");
    scanf("%d",&x);
    printf("Enter n:");
    scanf("%d",&n);

    for (int i=0;i<n;i++) {
        y = x*y;
    }

    printf("Y=%d^%d=%d",x,n,y);
    return 0;
}