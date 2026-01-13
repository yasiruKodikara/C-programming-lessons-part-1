#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void main() {
    int a,b,c,y,delta;
    float x1,x2;

    printf("Enter the number for a\n");
    scanf("%d",&a);
    printf("Enter the number for b\n");
    scanf("%d",&b);
    printf("Enter the number for c\n");
    scanf("%d",&c);

    delta = b*b - 4*a*c;

    if (a==0 && b==0) {
        printf("no solution");
    }else if (a == 0) {
        x1 = -1*c/b;

    }else if (delta<0) {
        printf("No solution");
    }else {
        x1 = ((-1*b + sqrt(delta))/2)/(float)(a);
        x2 = ((-1*b - sqrt(delta))/2)/(float)(a);
        printf("The solutions are: x1 = %.2f and x2 = %.2f",x1,x2);
    }



}
