#include <stdio.h>
#define len 50
int main() {

    char spc;
    int spc_count=0;
    char ch;
    int k= 0;




    char arr[len];

    while ((ch = getchar())!='\n') {
        arr[k] = ch;
        k++;

    }

    printf("\n");
    printf("Enter special character:");
    scanf("\n%c",&spc);

    //checking
    for (int i=0;i<len;i++) {
        if (spc == arr[i]) {
            spc_count++;
        }
    }

    printf("\n special character count is %d",spc_count);

    return 0;
}