#include<stdio.h>

int main() {
    int x = 5;
    int *x_memory_address = &x;

    printf("The value of x is %d\n",x);
    printf("The memory address of x is %d\n",x_memory_address);
    printf("The value of x is (using pointer variable) %d\n",*x_memory_address);

    return 0;
}