#include <stdio.h>
#define rows 4
#define cols 3
int main() {

    int sales[rows][cols] = {
        {310,275,365},
        {210,190,325},
        {405,235,240},
        {260,300,380}
    };

    int item1,item2,item3,grandTotalByGirls=0;
    int valueByGirl[rows]={0,0,0,0};
    int valueByItem[cols]={0,0,0};

    for (int i=0;i<rows;i++) {
        for (int j=0;j<cols;j++) {
            printf("%d ",sales[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    for (int i=0;i<rows;i++) {
        for (int j=0;j<cols;j++) {
            valueByGirl[i]+=sales[i][j];
        }

        printf("\n");
    }

    printf("\n");
    for (int i=0;i<rows;i++) {
        printf("value of sales by %dth girl:",i+1);
        printf(" %d\n",valueByGirl[i]);
    }

    printf("\n");

    for (int i=0;i<rows;i++) {

        item1+=sales[i][0];
        item2+=sales[i][1];
        item3+=sales[i][2];


        printf("\n");
    }

    printf("%d %d %d",item1,item2,item3);

    printf("\n");

    for (int i=0;i<rows;i++) {
        grandTotalByGirls+=valueByGirl[i];
    }
    printf("Grand total by girls %d",grandTotalByGirls);
    return 0;
}