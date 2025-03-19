// 14)
#include<stdio.h>
int main(void)
{
    float num1, num2;
    int choice, choice2, n1, n2;

    printf("Enter two real numbers: ");
    scanf("%f %f", &num1, &num2);
    printf("1)Addition      \t2)Subtraction\n3)Multiplication\t4)Division(Quotient)\n");
    printf("Enter your choice from 1 to 4: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case(1):
        printf("Addition: %.2f\n", num1 + num2);
        break;
        case(2):
        printf("SUbtraction: %.2f\n", num1 - num2);
        break;
        case(3):
        printf("Multiplication: %.2f\n", num1 * num2);
        break;
        case(4):
        {
        if(num2 != 0)
        {
            printf("1)Quotientt\t2)Remainder\nEnter Choice: ");
            scanf("%d", &choice2);
            if(choice2 == 1)
            printf("Quotient: %.2f",num1 / num2);
            else
            n1 = num1;
            n2 = num2;
            printf("Remainder: %d", n1 % n2);
        }
        else
        printf("Divisor can't be zero\n");
        break;
        }
        default:
        printf("Enter numbers between 1 to 4\n");
    }
    return 0;
}