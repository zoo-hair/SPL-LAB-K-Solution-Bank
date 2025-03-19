/*
1)Program that will decide whether a number is positive or not.
*/
#include<stdio.h>
int main(void)
{
    int num;

    printf("-----------------\n");
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("-----------------\n");

    if(num == 0)
    printf("Neutral\n");
    else if(num > 0)
    printf("Positive number\n");
    else
    printf("Negative number\n");

    return 0;
}