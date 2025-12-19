#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char number[1000];
    int c=0,len=0;

    scanf("%s",number);

    len=strlen(number);


    for (int j = 0;j<10;++j) {

        for (int i=0;i<=len;++i) {

            if ((number[i]-'0')==j) {
                c+=1;
            }

        }
        printf("%d ",c);
        c = 0;
    }




    return 0;
}
