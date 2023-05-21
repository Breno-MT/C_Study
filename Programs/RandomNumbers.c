#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    // pseudo random numbers = A set of values or elements that are statistically random
    // (Don't use these for any sort of cryptograhic security)

    srand(time(0)); // seed to generate 'random' numbers

    int number1 = (rand() % 6) + 1; // dice d6 or whatever number you want, could be d20, d19 etc...
    int number2 = (rand() % 6) + 1;
    int number3 = (rand() % 6) + 1;

    printf("%d\n", number1);
    printf("%d\n", number2);
    printf("%d\n", number3);

    return 0;
}