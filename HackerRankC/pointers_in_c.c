#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function
    int aa = *a + *b;
    int bb = *a - *b;
    if(bb<0){
        bb = bb*(-1);
    }else{
        bb = bb;
    }
    printf("%d\n%d", aa, bb);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);


    return 0;
}
