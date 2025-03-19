/*
Write a program (WAP) that will take N numbers as inputs and compute their average. 
(Restriction: Without using any array)
*/
#include <stdio.h>

int main() {
    int n;
    double num, sum = 0;

    printf("Enter the number of inputs: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%lf", &num);
        sum += num;
    }

    printf("AVG of %d inputs: %.3lf\n", n, sum / n);

    return 0;
}
