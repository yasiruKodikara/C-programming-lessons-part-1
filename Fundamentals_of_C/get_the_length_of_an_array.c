
#include<stdio.h>
void main() {
    int arr[11] = {1,2,3,4,4,3,2,4,22,43,5};
    int length = sizeof(arr)/sizeof(arr[0]);
    printf("the length of array is %d\n",length);
}