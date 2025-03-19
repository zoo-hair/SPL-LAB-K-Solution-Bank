/*
16)WAP that will find the GCD (greatest common divisor) and LCM (least common multiple) of two positive integers
*/

#include <stdio.h>

int main() {
    int num1, num2, a, b, gcd, lcm, temp;
    
    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);
    
    if (num1 <= 0 || num2 <= 0)
    {
        printf("Please enter positive integers only.\n");
        printf("Enter two positive integers: ");
        scanf("%d %d", &num1, &num2);
    }

    a = num1;
    b = num2;
    
    while (b != 0) 
    {
        temp = b;
        b = a % b;
        a = temp;
    }
    gcd = a;
    lcm = (num1 / gcd) * num2;

    printf("GCD of %d and %d is: %d\n", num1, num2, gcd);
    printf("LCM of %d and %d is: %d\n", num1, num2, lcm);
    
    return 0;
}
