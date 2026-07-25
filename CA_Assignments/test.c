#include <stdio.h>
#include <stdlib.h> // include stdlib to use malloc() and calloc()
int main()
{
    int a = 24;
    int b = 18;
    int gcd(int,int);
    printf("%d",gcd(a,b));


}

int gcd(int a,int b) {
    if (a==b) {
        return a;
    }
    if (a>b) {
        return gcd(a-b,b);
    }else {
        return gcd(a,b-a);
    }
}