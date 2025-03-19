/*
Write a program (WAP) that will print Fibonacci series upto Nth terms.
1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, …….
*/
#include <stdio.h>

int main(void) 
{
    int n, i;
    int first = 1, second = 1, next;
    
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    
    printf("Fibonacci Series: ");
    
    // Print first term
    printf("1");
    
    // If n is at least 2, print the second term
    if (n >= 2)
        printf(", 1");
    
    // Generate and print the remaining terms
    for (i = 3; i <= n; i++) 
    {
        next = first + second;
        printf(", %d", next);
        
        // Update values for next iteration
        first = second;
        second = next;
    }
    
    printf("\n");
    return 0;
}