/*
3)Program that will take an integer of length one from the terminal and then display the digit in English.
*/
#include<stdio.h>
int main(void)
{
    int num;

    printf("Enter a digit (0-9): ");
    scanf("%d", &num);

    switch (num)
    {
    case(1):
        printf("One\n");
        break;
    case(2):
        printf("Two\n");
        break;
    case(3):
        printf("Three\n");
        break;
    case(4):
        printf("Four\n");
        break;
    case(5):
        printf("Five\n");
        break;
    case(6):
        printf("Six\n");
        break;
    case(7):
        printf("Seven\n");
        break;
    case(8):
        printf("Eight\n");
        break;
    case(9):
        printf("Nine\n");
        break;
    
    default:
        printf("Enter a digit between 0 to 9\n");
        break;
    }
}