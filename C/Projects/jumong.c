/* Bullseye */

#include <stdio.h>
#include <stdlib.h>

int guessNumber();

int main()
{
    int secretNum = 5;
    int guessed = 0;
    int guessCount = 0;
    int guessLimit = 3;
    int outOfGuesses = 0;

    printf("\n\n____ Guess the number! ____\n\n");
    printf("You have %d attempts to guess the secret number!\n", guessLimit);

    while (guessed != secretNum && outOfGuesses == 0)
    {
        if (guessCount < guessLimit)
        {
            guessed = guessNumber();
            guessCount++;
        }
        else { outOfGuesses = 1; }
    }

    if (outOfGuesses == 1) { printf("\nLost! Out of guesses! Better luck next time.\n"); }
    else { printf("\nWon! Congratulations!\n"); }

    printf("\nThank you for playing!\n");

    return 0;
}

int guessNumber()
{
    int guess;

    printf("\nEnter thy guess :\t");
    scanf("%d", &guess);

    return guess;
}