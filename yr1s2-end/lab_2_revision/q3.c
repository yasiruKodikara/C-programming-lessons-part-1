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

void calcRadius(int x1, int y1, int x2, int y2, float *r) {
    float D;
    D = computeDistance(x1,y1,x2,y2);
    *r = D/2;
}

void calcArea(float r, float *A) {
    *A = 3.14*r*r;
}




void main() {
    int x1,y1,x2,y2;
    float r;
    float A;

    inputCoords(&x1,&y1,&x2,&y2);
    calcRadius(x1,y1,x2,y2,&r);
    calcArea(r, &A);



}