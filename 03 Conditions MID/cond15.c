/*
15)Program for “Guessing Game”:
Player-1 picks a number X and Player-2 has to guess that number within N = 3 tries. 
For each wrong guess by Player-2, the program prints “Wrong, N-1 Chance(s) Left!”
If Player-2 successfully guesses the number, the program prints “Right, Player-2 wins!” and stops allowing further tries (if any left).
Otherwise after the completion of N = 3 wrong tries, the program prints “Player-1 wins!” and halts.
*/
#include<stdio.h>
int main(void)
{
    int x = 20;
    int guess;
    int chances = 3;
    int flag = 0;  // 0 means Player 2 hasn't guessed correctly
    int attempt = 1;  // Track which attempt we're on

    // First attempt
    printf("Player 2 enter a number (%d chances left): ", chances);
    scanf("%d", &guess);
    if(guess == x) {
        printf("Right, Player 2 wins!\n");
        flag = 1;
    } else {
        chances--;
        printf("Wrong, %d Chance(s) Left!\n", chances);
        
        // Second attempt (only if first attempt failed)
        if(flag == 0 && chances > 0) {
            printf("Player 2 enter a number (%d chances left): ", chances);
            scanf("%d", &guess);
            if(guess == x) {
                printf("Right, Player 2 wins!\n");
                flag = 1;
            } else {
                chances--;
                printf("Wrong, %d Chance(s) Left!\n", chances);
                
                // Third attempt (only if second attempt failed)
                if(flag == 0 && chances > 0) {
                    printf("Player 2 enter a number (%d chances left): ", chances);
                    scanf("%d", &guess);
                    if(guess == x) {
                        printf("Right, Player 2 wins!\n");
                        flag = 1;
                    } else {
                        chances--;
                        printf("Wrong, %d Chance(s) Left!\n", chances);
                    }
                }
            }
        }
    }
    
    // Determine final winner
    if(flag == 0) {
        printf("Player 1 wins!\n");
    }
    
    return 0;
}

