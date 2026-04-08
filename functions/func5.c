#include<stdio.h>
int x = 0;
void main() {

    void test_var();
    void test_var_2();

    test_var();
    test_var();

    test_var_2();
}

void test_var() {
    extern int x;
    printf("%d\n",x);
    x+=10;
    printf("%d\n",x);
}

void test_var_2() {
    extern int x;
    x+=5;
    printf("%d",x);
}