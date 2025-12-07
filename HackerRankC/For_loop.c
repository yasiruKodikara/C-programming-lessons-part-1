#include <stdio.h>




int main()
{
    int a, b;
    const char *numNames[] = {
        "zero","one","two","three","four","five",
        "six","seven","eight","nine"
    };


    scanf("%d\n%d", &a, &b);
    // Complete the code.


    for(int i=a;i<=b;i++){
        if (i>=1 && i<=9) {
            printf("%s\n",numNames[i]);
        }else {

            if(i%2==0){
                printf("even\n");
            }else{
                printf("odd\n");
                }

        }











    }






    return 0;
}

