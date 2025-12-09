#include <stdio.h>

void main() {
    int *x;
    int y = 80;
    x = &y;
    printf("memory address: %d\n",x);
    printf("value y :%d\n",*x);
}
