/*
* Write a program (WAP) that will print the factorial (N!) of a given number N. Please see the sample input output.
*/

#include<stdio.h>
int main(void)
{
    int n, i, factorial = 1;
    int sum = 0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        factorial *= i;
        //sum += factorial;
        //i++;
    }
    printf("Factorial of %d is %d\n",n, factorial);

    return 0;
}