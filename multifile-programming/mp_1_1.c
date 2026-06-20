#include<stdio.h>

int i = 5;
extern void foo();

void main() {
    foo();
    printf("%d \n",i);
}