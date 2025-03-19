/*
Write a program (WAP) that will take two numbers X and Y as inputs. 
Then it will print the square of X and increment (if X<Y) or decrement (if X>Y) X by 1, until X reaches Y. If and when X is equal to Y, the program prints “Reached!”
*/
#include<stdio.h>
int main(void)
{
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    if(x>y)
    {
        while(x>=y)
        {
            printf("%d, ", x * x);
            x--;
            if(x == y)
            {
            printf("Reached");    
            break;
            }
        }
    }
    else
    {
        while(x<=y)
        {
            printf("%d, ", x * x);
            x--;
            if(x == y)
            {
                printf("Reached!");
            break;
            }
        }
    }
    return 0;
}