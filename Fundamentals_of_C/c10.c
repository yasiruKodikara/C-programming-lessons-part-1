#include<stdio.h>
void main()
{
    char A[20];
    char B,C,D;
    scanf("%[^\n]",A);

    printf("%s",A);

    scanf("\n%c\n%c\n%c",&B,&C,&D);
    printf("B=%c,C=%c,D=%c",B,C,D);

}
