/*
WAP that will determine whether a number is prime or not
*/
#include<stdio.h>
int main(void)
{
    int n, i, count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i=1; i <= n; i++)
    {
        if(n % i == 0)
        count++;
    }
    if(count == 2)
    printf("%d is a prime number\n", n);
    else
    printf("%d is not a prime number\n", n);

    return 0;
}
