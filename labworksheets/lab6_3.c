#include <stdio.h>
#include <math.h>
#define i sqrt(-1)

struct complex {
    int real;
    int img;

};
int main() {
    struct complex c1[2],ans[3];

    for (int j=0;j<2;j++) {
        printf("Enter the real part and imaginary part of the complex number:");
        scanf("%d %d",&c1[j].real,&c1[j].img);

    }

    for (int j=0;j<2;j++) {



    }


    return 0;
}