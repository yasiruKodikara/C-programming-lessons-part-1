#include <stdio.h>
void main()
{
    int x,y,n;
    y = 1;

    scanf("%d\n%d",&x,&n);


    for(int i=0;i<n;i++){
        y = y*x;

    };
    printf("%d to the power of %d is %d\n",x,n,y);
}