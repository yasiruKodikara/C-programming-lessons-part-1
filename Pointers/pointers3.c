#include<stdio.h>
int main() {
    //creating a null pointer

    int *x = NULL;
    printf("The memory address of x is %p\n",x);


    //arithmetic operations on pointers

    int arr[]={1,2,3,4};
    int *ptr = &arr;

    printf("%d\n",*ptr);
    printf("%d\n",ptr);
    ++ptr;
    printf("%d\n",*ptr);
    printf("%d\n",ptr);
    ++ptr;
    printf("%d\n",*ptr);
    printf("%d\n",ptr);
    ++ptr;
    printf("%d\n",*ptr);
    printf("%d\n",ptr);
    ++ptr;
    printf("%d\n",*ptr);
    printf("%d\n",ptr);



    return 0;
}