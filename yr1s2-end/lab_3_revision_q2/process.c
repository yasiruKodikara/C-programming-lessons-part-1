
#include <stdio.h>
#include <math.h>

extern int x1,y_1,x2,y2;
extern float r;
extern float D,A;

static void CalculateD() {
    D = sqrt((x2-x1)*(x2-x1)+(y2-y_1)*(y2-y_1));
    r = 0.5*D;
}


static void CalculateArea() {
    A = 3.14*r*r;

}


void CalculateR_A() {
    CalculateD();
    CalculateArea();
}