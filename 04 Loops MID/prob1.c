/*
Write a program (WAP) that will print following series upto Nth terms.
1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, …….
*/
#include<stdio.h>
int main(void)
{
    int i, series, n;
    series = 1;
    printf("Enter How many terms of series you want: ");
    scanf("%d", &n);

    for(i=1; i <= n; i++)
    {
        printf("%d ", series);
        series ++;
    }

    return 0;
}