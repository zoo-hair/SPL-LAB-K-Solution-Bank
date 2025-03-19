/*
* 10) Write a program (WAP) that will give the sum of first Nth terms for the following series.
* 1, -2, 3, -4, 5, -6, 7, -8, 9, -10, 11, -12, 13, -14, …….
*/
#include <stdio.h>

int main(void) {
    int n, sum = 0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        int term;
        if(i % 2 == 0)
        term = -i;
        else
        term = i;
        sum += term;
    }

    printf("Sum of first %d terms: %d\n", n, sum);
    
    return 0;
}
