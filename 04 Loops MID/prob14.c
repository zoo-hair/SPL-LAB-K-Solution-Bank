/*
* Write a program (WAP) that will find nCr where n >= r; n and r are integers.
*/
#include <stdio.h>

int main(void) {
    int n, r, i;
    int factn = 1, factr = 1, fact_n_r = 1, comb;

    printf("Enter value of n: ");
    scanf("%d", &n);
    printf("Enter value of r: ");
    scanf("%d", &r);

    if (n >= r) {
        // Compute factorial of n, r, and (n-r)
        for (i = 1; i <= n; i++) {
            factn *= i;
            if (i <= r) {
                factr *= i;
            }
            if (i <= (n - r)) {
                fact_n_r *= i;
            }
        }

        // Compute combination
        comb = factn / (factr * fact_n_r);

        // Print the result correctly
        printf("The value of combination is: %d\n", comb);
    } else {
        printf("The value of n must be greater than or equal to the value of r.\n");
    }

    return 0;
}
