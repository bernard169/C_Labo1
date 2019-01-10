#include <stdio.h>
#include <stdlib.h>

int main () {
    char name [128];
    unsigned int guess=0;
    srand (13); //seed is 13
    unsigned int number = (rand()%50)+1;
    printf ("Hello! What\'s your name ?\n");
    scanf("%s", name);
    printf("Well, %s, I am thinking of a number between 1 and 50. \nTake a guess.\n", name);
    unsigned int counter;
    counter = 0;
	unsigned int *pointerGuess = &guess;
    do {
		printf("Now enter a number \n");
        scanf("%u", pointerGuess);
        printf("Your wrote %u \n", guess);
        if (guess < number)
        {
            printf("Your guess is too low.\nTake another guess.");
        }
        else if (guess > number)
        {
            printf("Your guess is too high.\nTake another guess.\n");
        }
        counter++;
    } while (guess != number);
    
    printf ("Good job %s! You guessed my number (%u) in %u guesses !", name, number, counter);

    return 0;
}