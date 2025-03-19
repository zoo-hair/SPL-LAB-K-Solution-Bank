/*
Write a program (WAP) that will print following series upto Nth terms.
1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31 …….
*/
#include<stdio.h>
int main(void)
{
    int i, series, n;
    series = 1;

    printf("Enter term number: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        printf("%d ", series);
        series += 2;
    }

    return 0;
}