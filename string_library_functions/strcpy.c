#include <stdio.h>
#include <string.h>

void main() {
    char s1[]="This is string 1 sfsfs";
    char s2[20];
    char s3[]="This is string 3";

    printf("%s\n", s2);
    strcpy(s2,s1);
    printf("%s\n", s2);

    printf("%s",strcat(s1,s3));

    printf("\n%d",strlen(s1));

    printf("\n%d",strcmp(s3,s1));
    printf("\n%d",strcmp(s1,s3));
    printf("\n%d",strcmp(s1,s1));

}