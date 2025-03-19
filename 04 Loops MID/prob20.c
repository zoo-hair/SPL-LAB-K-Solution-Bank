/*
Write a program that takes an integer number n as input and find out the sum of the following series up to n terms.
1 + 12 + 123 + 1234 + …….
*/
#include<stdio.h>
int main(void)
{
    int num, i, comp, a, sum = 1;

    printf("Enter number: ");
    scanf("%d", &num);

    if (num == 1)  // Special case handling for n = 1
    {
        printf("Series: 1\n");
        printf("Sum of series up to 1 term: 1\n");
        return 0;
    }

    a = 1;
    printf("1 + "); //This line is for printing 1 of the series

    for(i=2; i <= num; i++)
    {
        comp = (a * 10) + i;
        sum += comp;
        printf("%d + ", comp); //This line will print the series as given in the question.
        a = comp;
    }
    printf("\nSum of series up to %dth term: %d", num, sum);

    return 0;
}