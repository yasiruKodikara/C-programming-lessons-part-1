#include <stdio.h>
void main() {
    int N;
    void input(int*);
    int fibbonacci(int);

    int f;

    input(&N);

    for (int count=1; count<=N; count++) {
        f = fibbonacci(count);
        printf("%d\n",f);
    }

}

void input(int* N) {
    printf("How many terms do you need? ");
    scanf("%d",&N);



}

int fibbonacci(int c) {
    static int f1 = 1,f2 = 1;
    int f;

    if (c<3) {
        f = 1;
    }else {
        f = f1+ f2;
    }
    f2 = f1;
    f1 = f;
    return f;

}