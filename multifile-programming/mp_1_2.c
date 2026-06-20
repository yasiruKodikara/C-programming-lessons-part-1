#include<stdio.h>
extern int i;

void foo() {
    i+=100;
    printf("%d\n",i);
}

