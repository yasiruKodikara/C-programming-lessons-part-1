#include <stdio.h>

int m,f=1;
extern void input();
extern void compute();

int main(void) {

    input();
    compute();

    printf("Factorial of %d is %d",m,f);

    return 0;
}