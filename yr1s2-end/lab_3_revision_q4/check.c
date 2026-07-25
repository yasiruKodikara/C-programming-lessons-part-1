#include <stdio.h>
#include <math.h>

extern int a,b,c;
extern float answer;

void check() {
    if (a==0) {
        if (b==0) {
            printf("No solutions");
        }

        answer = -1*c/b;


    }else {
        float delta = b*b-4*a*c;
        if (delta<0) {
            printf("There are no Roots");
        }else {
            answer = (-1*b+sqrt(delta))/2*a;
        }
    }
}