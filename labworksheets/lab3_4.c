#include <stdio.h>
int main() {
    unsigned long long fact=1;
    long m;
    printf("Enter a number: ");
    scanf("%ld",&m);

    for (int i=m;i>0;i--) {
        fact*=i;
    }
    printf("Factorial of %ld is: %ld",m,fact);
    return 0;
}