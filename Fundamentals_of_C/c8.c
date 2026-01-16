#include<stdio.h>
void main()
{
    char ch[100];

    //we do not use & with char array.because the name of the array is itself a pointer to the first element of the array.
    printf("Enter your name : ");
    scanf("%s ",ch);
    printf("Your name is : %s ",ch);
}
