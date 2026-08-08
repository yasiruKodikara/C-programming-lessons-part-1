#include <stdio.h>

struct complex {
    int real;
    int img;
};

extern struct complex t;

void input() {

    printf("Enter the real part:");
    scanf("%d",&t.real);

    printf("Enter the imaginary part:");
    scanf("%d",&t.img);
}