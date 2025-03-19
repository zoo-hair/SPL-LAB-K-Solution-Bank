/*
7)Program that will take two numbers X & Y as inputs and decide whether X is greater than/less than/equal to Y.
*/
#include <stdio.h>

int main(void) {
    float num1, num2;

    // Prompt the user to enter two numbers
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    // Compare num1 and num2 and print the appropriate message
    if (num1 == num2)
        printf("%.2f is equal to %.2f\n", num1, num2);
    else if (num1 > num2)
        printf("%.2f is greater than %.2f\n", num1, num2);
    else
        printf("%.2f is less than %.2f\n", num1, num2);

    return 0;
}
