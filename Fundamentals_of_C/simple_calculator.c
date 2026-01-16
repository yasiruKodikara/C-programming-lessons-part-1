
#include<stdio.h>
void main()
{
    int sum,sub,n1,n2;

    scanf("%d\n%d",&n1,&n2);
    sum = n1 + n2;

    if(n1>n2){
        sub = n1 - n2;
    }else{
        sub = n2 - n1;
    }
    printf("sum = %d,sub = %d",sum,sub);

}
