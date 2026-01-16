#include <stdio.h>
#define ROW 3
#define COL 3
int main() {
    int arr1[ROW][COL] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int tot=0;



    printf("Original\n");
    for (int i=0;i<ROW;i++) {

        tot+=arr1[i][i];


    }

    printf("Total = %d\n",tot);


    return 0;
}