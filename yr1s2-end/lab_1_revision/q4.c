#include<stdio.h>


int startMsg() {
    int n;
    printf("program started, enter your number which is greater than zero\n");
    scanf("%d",&n);
    return n;
}

void endMsg(int n, int t) {
    printf("%d Numbers are divisible by three\n",n);
    printf("summation of the other numbers not divisible by three %d\n",t);
}

int divBy3(int x) {
    return x+1;
}


int add(int n,int t) {
    return n+t;
}

void checkNumber(int *c,int *t,int n) {
    if (n%3==0) {
        *c = divBy3(*c);
    }else {
        *t = add(n,*t);
    }
}



void main() {
    int num1,count,total;

    num1 = startMsg();
    count = 0;
    total = 0;
     while (num1>0) {
         checkNumber(&count,&total,num1);
         num1 = num1-1;
     }

    endMsg(count,total);
}