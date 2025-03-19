/*
18) WAP that will determine whether an integer is palindrome number or not
*/
#include<stdio.h>
int main(void)
{
    int i, number, old_num, reverse = 0, remainder = 0;

    printf("Program to check if a number is Palindrome\nEnter a number: ");
    scanf("%d", &number);

    old_num = number;

    while(number != 0)
    {
        remainder = number % 10;
        reverse = (reverse * 10) + remainder;
        number /= 10;
    }
    
    if(old_num == reverse)
    {
        printf("The Number is a palindrome\n");
    }
    else
    printf("The Number is not a palindrome\n");

    return 0;
}