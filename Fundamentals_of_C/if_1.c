#include <stdio.h>
void main(){
int number;

printf("Enter the number:");
scanf("%d",&number);
if(number<0)
{
    number = -number;
    printf("%d",number);

}else{
    printf("%d",number);
}

}
