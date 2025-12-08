#include <stdio.h>
int main() {
    int x,y;
    char str[20];
    x = 10564;

    while (x>0) {
        y += x%10;
        x/=10;
    }
    printf("%d\n",y);
    return 0;
}