#include <stdio.h>

void main() {
    char g;
    int ca=0,cb=0,cc=0,cd=0,ce=0;
    for (int i = 1; i<=5;i++) {
        printf("enter the character : ");
        scanf("\n%c",&g);
        if (g=='A') {
            ca++;
        }else if (g=='B') {
            cb++;
        }else if (g=='C') {
            cc++;
        }else if (g=='D') {
            cd++;
        }else if (g=='E') {
            ce++;
        }else {
            printf("error");
        }
    }
    printf("the number of characters are : %d\n",ca);
    printf("the number of characters are : %d\n",cb);
    printf("the number of characters are : %d\n",cc);
    printf("the number of characters are : %d\n",cd);
    printf("the number of characters are : %d\n",ce);
}
