#include<stdio.h>
int main() {
    //Assigning one pointer to another pointer
    int i = 10;
    int *p,*q;
    p = &i;
    q = p;
    printf("%d %d\n",*p,*q);

    printf("-------------------------------\n");

    int x = 10,y=20;
    int *r = &x;
    int *s = &y;
    *r = *s;
    printf("%d\n",x);
    printf("%d\n",y);
    return 0;
}