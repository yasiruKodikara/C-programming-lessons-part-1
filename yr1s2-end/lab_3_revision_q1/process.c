#include <stdio.h>
#include<math.h>

static float r;
extern int x1,y_1,x2,y2;

static void CalculateR() {



    r = sqrt((x2-x1)*(x2-x1)+(y2-y_1)*(y2-y_1));

}

static void CalculateP() {
    extern float p;

    p = 2*3.14*r;

}

static void CalculateA() {
    extern float A;
    A = 3.14*r*r;
}
void CalculateP_A() {
    CalculateR();
    CalculateP();
    CalculateA();

}