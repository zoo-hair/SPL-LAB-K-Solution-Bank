/*
5)Program that will read from the console a random positive nonzero number and determine if it is a power of 2. 
*/

#include <stdio.h>

int main() {
    int num;
    
    // Read input from the user
    printf("Enter a positive nonzero number: ");
    if (scanf("%d", &num) != 1 || num <= 0) {
        printf("Invalid input! Please enter a positive nonzero integer.\n");
        return 1;
    }
    
    // Check if the number is a power of 2 without using bitwise operations, loops, or functions
    if (num == 1 || num == 2 || num == 4 || num == 8 || num == 16 || num == 32 || num == 64 || num == 128 || num == 256 || num == 512 || num == 1024 || num == 2048 || num == 4096 || num == 8192 || num == 16384 || num == 32768 || num == 65536 || num == 131072 || num == 262144 || num == 524288 || num == 1048576) {
        printf("%d is a power of 2.\n", num);
    } else {
        printf("%d is NOT a power of 2.\n", num);
    }
    
    return 0;
}
