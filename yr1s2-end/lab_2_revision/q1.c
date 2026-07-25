#include<stdio.h>
#include <math.h>

void input(int *a, int *b, int *c) {
    printf("Enter lengths:");
    scanf("%d %d %d",a,b,c);
}

float computeArea(int a, int b, int c) {
    float A;
    int s;
    s = (a+b+c)/2;
    A = sqrt(s*(s-a)*(s-b)*(s-c));
    return A;

}

void output(float A) {
    printf("Area is %.2f",A);
}


void main() {
    int a,b,c;
    float A;

    input(&a,&b,&c);
    A = computeArea(a,b,c);
    output(A);
}