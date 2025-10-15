#include<stdio.h>
void main()
{
    double x = 32.93423230;
    float y = 23.232323;

    //rounding
    printf("%.3f", x);
    printf("\n%.4f\n", x);

    printf("x = %.4f, y = %.2f",x,y);
    printf("\n\n\nx*y=%.3f",x*y);
    printf("\n%.4e", x);

    double a = 5000.0;
    float b = 0.0025;

    printf("\n a = %.6f , b = %.6f , a*b = %.10f , a/b =  %.6f", a,b,a*b,a/b);
    printf("\n a = %.6e , b = %.6e , a*b = %.10e , a/b =  %.6e", a,b,a*b,a/b);

    printf("\n a = %.6f , \nb = %.6f ,\n a*b = %.10f ,\n a/b =  %.6f", a,b,a*b,a/b);
}