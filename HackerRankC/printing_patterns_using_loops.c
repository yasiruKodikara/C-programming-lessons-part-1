#include <stdio.h>

//AI GENERATED CODE!!!

int main()
{
    int n;
    scanf("%d", &n);

    // The size of the grid is always (2 * n) - 1
    int len = 2 * n - 1;

    // Iterate through rows
    for (int i = 0; i < len; i++) {
        // Iterate through columns
        for (int j = 0; j < len; j++) {

            // Calculate the minimum distance to any of the 4 borders
            // 1. Distance to Top: i
            // 2. Distance to Left: j
            // 3. Distance to Bottom: len - 1 - i
            // 4. Distance to Right: len - 1 - j

            int min = i < j ? i : j;
            min = min < len - 1 - i ? min : len - 1 - i;
            min = min < len - 1 - j ? min : len - 1 - j;

            // Print the value based on the formula: n - min_distance
            printf("%d ", n - min);
        }
        // Move to the next line after printing one row
        printf("\n");
    }
    return 0;
}