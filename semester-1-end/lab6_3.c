#include <stdio.h>
#include <math.h>
#define i sqrt(-1)

struct complex {
    int real;
    int img;

};
int main() {
    struct complex c1[2],ans[3];
    int r_sum = 0,im_sum = 0;
    int r_mul = 0,im_mul = 0;
    float r_q = 0,im_q = 0;

    for (int j=0;j<2;j++) {
        printf("Enter the real part and imaginary part of the complex number:");
        scanf("%d %d/n",&c1[j].real,&c1[j].img);

    }


    //calculating the sum
    r_sum = c1[0].real + c1[1].real;
    im_sum = c1[0].img + c1[1].img;
    printf("Sum = %d + %d i \n",r_sum,im_sum);


    //calculating the product
    r_mul = c1[0].real * c1[1].real - c1[0].img * c1[1].img;
    im_mul = c1[0].real * c1[1].img + c1[0].real * c1[1].img;
    printf("Product = %d + %d i \n",r_mul,im_mul);

    //calculating the q
    int t = c1[1].real*c1[1].real+c1[1].img*c1[1].img;
    r_q = (c1[0].real * c1[1].real + c1[0].img * c1[1].img)/(float)(t);
    im_q = (c1[0].img * c1[1].real - c1[0].real * c1[1].img)/(float)(t);
    printf("Quatien = %.2f + %.2f i \n",r_q,im_q);







    return 0;
}