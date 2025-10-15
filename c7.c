#include<stdio.h>
void main()
{
    int i = 123;
    float x = 12.0 , y = -3.3;

    printf(":%d %f :\n\n",i,x);
    printf(":%2d %2.1f :\n\n",i,x);
    printf(":%3d %3.2f :\n\n",i,x);
    printf(":%4d %4.3f :\n\n",i,x);
    printf(":%5d %5.4f :\n\n",i,x);
    printf(":%6d %6.5f :\n\n",i,x);

    printf("--------------------------------------\n\n");

    printf(":%d %f :\n\n",i,x);
    printf(":%-d %-f :\n\n",i,x);
    printf(":%+2d %+2.1f :\n\n",i,x);
    printf(":%3d %3.2f :\n\n",i,x);
    printf(":%4d %4.3f :\n\n",i,x);
    printf(":%5d %5.4f :\n\n",i,x);
    printf(":%6d %6.5f :\n\n",i,x);


}