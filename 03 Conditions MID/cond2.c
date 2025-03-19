/*
2) Program that will decide whether a number is even or odd.
*/
#include<stdio.h>
int main(void)
{
    int num;

    printf("-----------------\n");
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("-----------------\n");

    if(num % 2 == 0)
    printf("Even Number\n");
    else 
    printf("Odd Number\n");

    return 0;
}