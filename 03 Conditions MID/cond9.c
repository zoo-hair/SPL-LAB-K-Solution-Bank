/*
9)Program that will categorize a single character that is entered at the terminal, whether it is an alphabet, a digit or a special character.
*/
#include<stdio.h>
int main(void)
{
    char c;

    printf("Enter a character: ");
    scanf("%c", &c);

    if((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
    printf("Alphabet\n");
    else if(c >= '0' && c <= '9')
    printf("Digit\n");
    else
    printf("Special character\n");

    return 0;
}