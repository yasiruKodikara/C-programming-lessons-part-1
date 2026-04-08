#include<stdio.h>
void main() {
    int x,y;
    void test_var();

    test_var();
    test_var();
}

void test_var() {
    static int x=0;
    printf("%d\n",x);
    x+=10;
    printf("%d\n",x);
}