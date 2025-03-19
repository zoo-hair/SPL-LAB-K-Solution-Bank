/*
6) Write a program (WAP) for the described scenario: 
Player-1 picks a number X and Player-2 has to guess that number within N tries. 
For each wrong guess by Player-2, the program prints “Wrong, N-1 Choice(s) Left!” If Player-2 at any time successfully guesses the number, the program prints “Right, Player-2 wins!” and terminates right away. 
Otherwise after the completion of N wrong tries, the program prints “Player-1 wins!” and halts.
(Hint: Use break/continue)
*/
#include<stdio.h>
int main(void)
{
    int i, n, num1, num2, count;

    printf("Player 1 enter a number: ");
    scanf("%d", &num1);

    printf("Enter number of tries: ");
    scanf("%d", &n);

    count = n;

    for(i = 1; 1 <= n; i++)
    {
        printf("Player-2 enter a number: ");
        scanf("%d", &num2);

        if(num1 == num2)
        {
            printf("Right, Player-2 wins!\n");
            break;
        }
        else
        {
            count--;
            printf("Wrong, %d choices left!\n", count);
            if(count == 0)
            break;          
        }
    }
    if(count == 0)
    printf("Player-1 wins!\n");

    return 0;
}