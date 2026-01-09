#include <stdio.h>

void main() {
    char str1[5];
    char str2[11];
    printf("Enter the string1:");
    scanf("%s",str1);

    printf("Enter the string2:");
    scanf("%s",str2);

    printf("\n%s %s\n",str1,str2);
    printf("%s\n%s",str1,str2);
    printf("\n%.1s.%.1s",str1,str2);

}
