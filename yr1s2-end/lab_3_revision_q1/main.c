#include <stdio.h>

float r;
float p;
float A;
int x1,y_1,x2,y2;

int main(void) {

    extern int x1,y_1,x2,y2;
    extern void CalculateP_A();
    extern void OutputP_A();

    x1 = 0;
    y_1 = 0;
    x2 = 4;
    y2 = 5;
    // printf("Enter Coordinates:");
    // scanf("%d %d %d %d",&x1,&y_1,&x2,&y2);

    CalculateP_A();
    OutputP_A();


    return 0;
}