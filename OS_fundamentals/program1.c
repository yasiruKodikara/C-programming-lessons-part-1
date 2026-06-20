#include <stdio.h>
#include <stdlib.h>

int global_init = 10;
int global_uninit;

int sim_calculation(int input) {
    int factor = 2;
    return input*factor;
}

int main()
{
    int count = 0;

    int *heap_val = (int*)malloc(sizeof(int));

    if(heap_val == NULL)
    {
        return 1;
    }

    *heap_val = 50;

    int local_init = 25;
    int result = sim_calculation(local_init);

    printf("Value is: %d, Location is: %p\n", global_init, (void*)&global_init);
    printf("Value is: %d, Location is: %p\n", global_init, (void*)&global_init);
    printf("value is %d , location is : %p\n",global_init,(void*)&global_init);
    printf("final result: %d",result);
}