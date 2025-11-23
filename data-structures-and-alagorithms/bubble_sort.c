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
    int arr[15] = {34,67,78,78,67,45,12,1,-2,-456,0,68,90,89,69};
    int length = sizeof(arr)/sizeof(arr[0]);
    bubble_sort(arr,length);
    for (int i;i<length;i++){
    printf("%d ",arr[i]);
    }

}
