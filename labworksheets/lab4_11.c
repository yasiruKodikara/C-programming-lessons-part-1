#include <math.h>
#include <stdio.h>
#include <string.h>

int main() {
    int e = 0,len=0;
    //further enhacements:Get the string from the user and validate

    char p[]="MADAMIMADAM";

    len=strlen(p);


    for (int i=0,j=len-1;i<len,j>0;i++,j--) {
        if (p[i]!=p[j]) {
            e++;
        }
    }
    printf("%d",e);
    if (e==0) {
        printf("\npalindrome");
    }else {
        printf("\nnot palindrome");
    }

    return 0;
}
