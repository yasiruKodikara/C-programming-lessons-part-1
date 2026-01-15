#include <stdio.h>
#define SIZE 10
int main() {

    int i = 0;
    char bin[SIZE],ch;

    while ((ch=getchar())!='\n') {
        if (ch=='0') {
            ch='1';
        }else {
            ch='0';
        }
        bin[i] = ch;
        i++;
    }
    for (int i=0;i<SIZE;i++) {
        printf("%c",bin[i]);
    }



    return 0;
}