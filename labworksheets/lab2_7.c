#include <stdio.h>

void main() {
    int x;
    scanf("%d",&x);

    int y = (x>0)? 1: (x==0)? 0 :-1;
    printf("%d",y);
}