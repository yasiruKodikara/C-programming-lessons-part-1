#include <stdio.h>

int a,b,c;
float answer;
extern void input();
extern void check();

int main(void) {

    input();
    check();

    printf("Answer = %.2f",answer);

    return 0;
}