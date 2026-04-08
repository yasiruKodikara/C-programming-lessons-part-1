#include <stdio.h>
void order(int*a,int*b) {
    int z;

    if (*a<*b) {
        z = *a;
        *a = *b;
        *b = z;
    }
}

void main() {
    int x,y;
    printf("Enter two values\n");
    scanf("%d %d",&x,&y);
    order(&x,&y);
    printf("ordered values %d %d",x,y);
}