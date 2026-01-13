#include<stdbool.h>
#include<stdio.h>

void main() {
    int a,b,c,h,l,m;
    bool test;

    printf("Enter the number for a\n");
    scanf("%d",&a);
    printf("Enter the number for b\n");
    scanf("%d",&b);
    printf("Enter the number for c\n");
    scanf("%d",&c);

    if (a>b) {
        if (a>c) {
            h = a;
            l = b;
            m = c;

        }else {
            h = c;
            l = b;
            m = a;

        }
    }else {
        if (b>c) {
            h = b;
            l = a;
            m = c;

        }else {
            h = c;
            l = b;
            m = a;

        }
    }

    test = (bool)(h*h == (l*l)+(m*m));
    if (test) {
        printf("Right-Angled Triangle");
    }else {
        printf("Not Right-Angled Triangle");
    }

}