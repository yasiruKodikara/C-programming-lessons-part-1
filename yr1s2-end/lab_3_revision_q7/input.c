#include <stdio.h>
#include <string.h>

static char text[] = "1234";
extern int sum;

void input() {
    for (int i = 0;i<strlen(text);i++) {
        sum += text[i]-'0';
    }
}