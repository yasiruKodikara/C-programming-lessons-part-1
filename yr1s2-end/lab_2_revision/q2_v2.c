#include<stdio.h>
#include <math.h>


int x1,y_1,x2,y2;
float D;

void inputCoords() {
    extern int x1,y_1,x2,y2;
    printf("Enter coordinates:");
    scanf("%d %d %d %d",&x1,&y_1,&x2,&y2);
}

void computeDistance() {
    extern float D;
    extern int x1,y_1,x2,y2;

    D = sqrt((x2-x1)*(x2-x1)+(y2-y_1)*(y2-y_1));



}


void main() {
    extern float D;
    int x1,x2,y1,y2;

    inputCoords();

   computeDistance();

    printf("Distance is %.2f",D);
}