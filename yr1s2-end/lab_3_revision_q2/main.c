#include <stdio.h>

int x1,y_1,x2,y2;
float r;
float D,A;

int main(void) {
    extern void InitCoords();
    extern void CalculateR_A();
    extern void output();

    InitCoords();
    CalculateR_A();
    output();

    return 0;
}