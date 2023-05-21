#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    const int MIN = 1;
    const int MAX = 100;

    int guess;
    int guesses;
    int answer;

    srand(time(0)); // uses current time as a seed

    answer = (rand() % MAX) + MIN; // generate a random number between MIN & MAX

    do {
        printf("Enter a number: ");
        scanf("%d", &guess);
        if (guess > answer)
        {
            printf("Too High!\n");
        }
        else if (guess < answer)
        {
            printf("Too low!\n");
        }
        else
        {
            printf("CORRECT!!!\n");
        }
        guesses++;
    }while (guess != answer);

    printf("---*---*---*---*---\n");
    printf("Answer: %d\n", answer);
    printf("Guesses: %d\n", guesses);

    return 0;
}