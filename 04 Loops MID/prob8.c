/*8) Write a program (WAP) that will reverse the digits of an input integer.*/
#include<stdio.h>
int main(void)
{
    int num, remainder, reverse;
    reverse = 0;
    remainder = 0;

    printf("Enter the number you want to reverse: ");
    scanf("%d", &num);

    while(num != 0)
    {
        remainder = num % 10;
        reverse = (reverse * 10) + remainder;
        num /= 10;
    }
    printf("Reversed number: %d\n", reverse);

    return 0;
}