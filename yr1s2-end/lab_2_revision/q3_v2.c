#include<stdio.h>
#include <math.h>

int x1,y_1,x2,y2;
float D;
float r,A;

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

void calcRadius() {
    extern float D;
    extern float r;
    extern int x1,y_1,x2,y2;
    computeDistance();
    r = D/2;
}

void calcArea() {
    extern float A;

    A = 3.14*r*r;
}




void main() {
    extern int x1,y_1,x2,y2;
    extern float r;
    extern float A;

    inputCoords();
    calcRadius();
    calcArea();

    printf("Area is %.3f",A);



}