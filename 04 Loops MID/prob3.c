/*
Write a program (WAP) that will print following series upto Nth terms.
1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, …….
*/
#include<stdio.h>
int main(void)
{
    int i, n, series;
    series = 1;

    printf("Enter term: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        if(series % 2 == 0)
        printf("0, ");
        else
        printf("1, ");
        series ++;
    }

    return 0;
}