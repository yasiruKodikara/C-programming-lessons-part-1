#include<stdio.h>
int main() {
    //Change a value of a veriable by using pointer
    int x = 10;
    int *ptr = &x;

    printf("%d\n",x);
    *ptr = 20;

    printf("%d\n",x);



    //A word of caution
    //1.Never apply the indirection operator to the uninitialized pointer
    // int *ptr3;
    // printf("%d\n",*ptr3);

    //2.Assigning value to uninitialized pointer is dangerous.
    // int *ptr2;
    // *ptr2 = 20;
    // printf("%d\n",*ptr2);



    return 0;
}