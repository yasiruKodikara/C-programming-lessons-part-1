#include<stdio.h>

int main() {
    int x = 2;
    float y;
    int arr[]={1,2,3,4,5,6};

    //Get the memory addresses
    printf("The memory address of x is %d\n",&x);
    printf("The memory address of y is %d\n",&y);
    printf("The memory address of y is %d\n",&y);

    printf("---------------------------------------------------");

    printf("The memory address of y is %d\n",&arr);
    printf("The memory address of y is %d\n",&arr[0]);
    printf("The memory address of y is %d\n",&arr[1]);
    printf("The memory address of y is %d\n",&arr[2]);
    printf("The memory address of y is %d\n",&arr[3]);
    printf("The memory address of y is %d\n",&arr[4]);


    //from hex
    printf("The memory address of x is %x\n",&x);

    return 0;

}