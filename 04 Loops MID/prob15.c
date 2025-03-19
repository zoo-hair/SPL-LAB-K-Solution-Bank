/*
15) Write a program (WAP) that will find xy (x to the power y) where x, y are positive integers.
*/
#include <stdio.h>
#include <math.h>

int main(void) {
    int base, power;

    while (1) {
        printf("To exit, enter -1 -1.\nEnter base and power (space-separated): ");
        scanf("%d %d", &base, &power);

        // Exit condition BEFORE computing the power
        if (base == -1) {  
            printf("Exiting program...\n");
            break;  
        }

        printf("%.0lf\n", pow(base, power));  // Correct format for integer-like output
    }

    return 0;
}
