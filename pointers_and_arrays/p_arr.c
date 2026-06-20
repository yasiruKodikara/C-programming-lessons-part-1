#include <stdio.h>

void main() {
    int x[5] = {1,2,3,4,5};



    printf("%p\n",x);
    printf("%p\n",x+1);
    printf("%p\n",x+2);

    // x[2] = x[1];
    // *(x+2) = *(x+1);

    int *p1;

    p1 = &x[1];
    x[2] = *p1;

    for (int i=0; i<5;i++) {
        printf("%d ",x[i]);
    }
}
