/*
11) Write a program (WAP) that will calculate the result for the first Nth terms of the following series.  [In that series sum, dot sign (.) means multiplication]
12.2 + 22.3 + 32.4 + 42.5 + …….
*/
#include<stdio.h>
int main(void)
{
    int n,i,j, result = 0;

    printf("Enter how many terms do you want: ");
    scanf("%d", &n);

    for ( i = 1, j =2; (i <= n) && (j <= (n+1))  ; i++,j++)
    {
        result += (i*i)*j;
    }
    printf("Result: %d", result);
    
    return 0;
}