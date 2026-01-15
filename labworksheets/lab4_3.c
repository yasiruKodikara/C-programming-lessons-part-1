#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define c 5

int main() {
    int arr[c];
    int pos;
    int entered_positions[c];

    for (int i=0; i<c; i++) {
        printf("Enter the position You have entered %d elements:",i);
        scanf("%d",&pos);
        if (pos>=c || pos<=0) {
            printf("Length exceeded!\n");

        }else {


            for (int i=c;i>=pos;i--) {
                arr[i]=arr[i-1];
            }
            printf("Enter a number : ");
            scanf("%d",&arr[pos-1]);

        }



    }

    //printing theelements
    for (int i=0;i<c;i++) {
        printf("%d ",arr[i]);
    }




    return 0;
}