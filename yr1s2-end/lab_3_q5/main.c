#include <stdio.h>


int x,n,y=1;
extern void input();
extern void compute();
extern void output();

int main(void) {

    input();
    compute();
    output();
    return 0;
}