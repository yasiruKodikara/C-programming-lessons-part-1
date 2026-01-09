#include <stdio.h>
#include <math.h>

void main() {
    float a,b,c,d;
    scanf("%f %f %f %f",&a,&b,&c,&d);
    //with roundf()
    printf("%.2f %.2f %.2f %.2f\n",roundf(a),roundf(b),roundf(c),roundf(d));

    //without roundf()
    printf("\n%.0f %.0f %.0f %.0f",a+0.5,b+0.5,c+0.5,d+0.5);
}
