#include <stdio.h>
void exchange(int *a,int *b) {
    int z;
    z = *a;
    *a = *b;
    *b = z;
}

void order3(int *x, int *y, int *z) {
    void exchange(int*,int*);

    if (*y<*x) {
        exchange(&x,&y);
    }

    if (*z<*y) {
        exchange(&y,&z);

    }

    printf("%d %d %d",*x,*y,*z);
}


void main() {
    void order3(int*,int*,int*);
    int a=35,b=23446,c=1333;
    order3(&a,&b,&c);

}