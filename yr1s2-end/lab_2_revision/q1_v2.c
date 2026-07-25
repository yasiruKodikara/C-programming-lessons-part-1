#include<stdio.h>
#include <math.h>

int a,b,c;
float A;

void input() {
    extern int a,b,c;
    printf("Enter lengths:");
    scanf("%d %d %d",&a,&b,&c);
}

float computeArea() {
    extern float A;
    extern int a,b,c;
    int s;
    s = (a+b+c)/2;
    A = sqrt(s*(s-a)*(s-b)*(s-c));
    return A;

}

void output() {
    extern float A;
    printf("Area is %.2f",A);
}


void main() {



    input();
    computeArea();
    output();
}