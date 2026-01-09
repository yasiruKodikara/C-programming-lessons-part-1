#include <stdio.h>

void main() {
    int x,hs,ds,os;
    printf("Enter value of x:");
    scanf("%d",&x);



    hs = (int)(x/100);
    ds = (x-100*hs)/10;
    os = x%10;

    printf("ones %d\n",os);
    printf("tens %d\n",ds);
    printf("hundresds %d\n",hs);

}
