#include <stdio.h>
int main() {
    int a, b, c;
    int s1,s2,s3;

    printf("Enter the number for a\n");
    scanf("%d",&a);
    printf("Enter the number for b\n");
    scanf("%d",&b);
    printf("Enter the number for c\n");
    scanf("%d",&c);

    s1 = a*a;
    s2 = b*b;
    s3 = c*c;

    if ((s1==s2+s3)||(s2==s1+s3)||(s3==s1+s2)) {
        printf("YES");
    }else {
        printf("NO");
    }
}