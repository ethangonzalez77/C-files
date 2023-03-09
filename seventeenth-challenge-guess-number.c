#include <stdio.h>
#include <stdlib.h>
#include <time.h>//for random number generator seed.

int main () {

    int randomNumber = 0;
    int guess = 0;
    int numberOfGuesses;// we are gunna initialize it in the loop.
    time_t t;

    //we want to generate the random number first before asking the user the question.
    srand((unsigned) time(&t));//time funtion is what gets the current time.
    //srand is a function we gunna pas in a seed using time(&t), &t is what seeds it.

    //get random number
    randomNumber = rand() % 21;//21 ensures that the range is between 0-20

    printf("\n This is a guessing game.");
    printf("\n I have choosen a number between 0-20, whats the number? \n");

    for (numberOfGuesses = 5; numberOfGuesses > 0; --numberOfGuesses) {

        printf("\n You have %d tr%s left.", numberOfGuesses, numberOfGuesses == 1 ?  "y" : "ies");//we are using a ternary operrator here. tr%s is gunna change, its either gunna be tries or try. its gunna change based on how many guesses you have left. So we gunna use the ternary operator or rather the conditional operator with the ternary operator. we ust being fancy here.
        printf("\n Enter a guess: ");
        scanf("%d", &guess);

        if (guess == randomNumber) {

            // printf("\n Congradulations. You guessed it! \n"); was this now its different.

            return printf("\n Congradulations. You guessed it! \n");//changed this from break statement. However how does this return statement exit out the loop before the conditional test becomes false? So doing this is supposed to just print this msg and not the fail msg.

        }else if (guess < 0 || guess > 20) {

            printf("I said the number is between 0-20.\n");
        }else if (randomNumber > guess) {
            printf("Sorry, %d is wrong. My number is greater than that. \n", guess);
        }else if (randomNumber < guess) {
            printf("Sorry, %d is wrong. My number is less than that. \n", guess);
        }

    }

    printf("\n You have had 5 tries and failed. the number was %d\n", randomNumber);

    return 0;
}