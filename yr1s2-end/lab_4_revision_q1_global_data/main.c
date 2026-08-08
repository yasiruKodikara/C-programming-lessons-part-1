#include <stdio.h>

struct complex {
    int real;
    int img;
};

struct complex x,y,p,q,r,t;

extern void input();
extern void sum();
extern void product();
extern void quotient();
extern void output();


int main(void) {


    input();
    x.real = t.real;
    x.img = t.img;

    input();
    y.real = t.real;
    y.img = t.img;


    sum();
    product();
    quotient();

    output();

    return 0;
}