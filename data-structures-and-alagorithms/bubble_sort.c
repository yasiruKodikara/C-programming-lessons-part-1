#include<stdio.h>

void bubble_sort(int* arr,int length) {
    for(int k=1;k<length;k++){
        for (int i=0;i<length-1;i++){
            if (arr[i]>arr[i+1]){
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;

            }
        }
    }

}

void main(){
    int arr[10] = {12,23,34,56,23,45,89,23,34,15};
    bubble_sort(arr,10);
    for (int i;i<10;i++){
    printf("%d ",arr[i]);
    }

}
