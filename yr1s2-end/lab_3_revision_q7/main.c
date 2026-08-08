#include <stdio.h>


int sum=0;
extern void input();

int main(void) {

    input();
    printf("sum of the digits is %d",sum);
    return 0;
}