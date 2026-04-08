#include <stdio.h>
#include<string.h>
void main() {
    char st1[] = "yasiru kodikara";
    char st2[30];
    char st3[] = " C programming ledgend";

    printf("%s\n",st1);
    printf("%s\n",st2);
    printf("%s\n",st3);

    strcpy(st2,st1);
    printf("%s\n",st1);
    printf("%s\n",st2);
    printf("%s\n",st3);

    printf("%s",strcat(st1,st3));
    printf("%s",strncat(st1,st3,3));

    printf("%d",strlen(st1));
}