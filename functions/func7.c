#include<stdio.h>

int FindMin(int a, int b) {
    if (a<b) {
        return a;
    }else {
        return b;
    }
}

void MinOfThree(int x, int y, int z) {
    int FindMin(int,int);
    int t;
    t = FindMin(x,y);
    printf("min = %d",FindMin(z,t));
}

void main() {
    int a,b,c;
    void MinOfThree(int,int,int);

    printf("Enter three ints:\n");
    scanf("%d %d %d",&a,&b,&c);
    MinOfThree(a,b,c);
}