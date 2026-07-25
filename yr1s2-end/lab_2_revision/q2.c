#include<stdio.h>
#include <math.h>

void inputCoords(int *x1, int *y1, int *x2, int *y2) {
    printf("Enter coordinates:");
    scanf("%d %d %d %d",x1,y1,x2,y2);
}

float computeDistance(int x1, int y1, int x2, int y2) {
    float D;

    D = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));

    return D;

}


void main() {
    float D;
    int x1,x2,y1,y2;

    inputCoords(&x1,&y1,&x2,&y2);

    D = computeDistance(x1,y1,x2,y2);

    printf("Distance is %.2f",D);
}