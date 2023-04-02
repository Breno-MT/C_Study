#include <stdio.h>
#include <string.h>

struct Player {
    char name[12];
    int score;
};


int main() {

    struct Player player1;
    struct Player player2;

    strcpy(player1.name, "Breno");
    player1.score = 15;

    strcpy(player2.name, "Goat");
    player2.score = 14;

    printf("Player1 name is: %s\n", player1.name);
    printf("Player1 score is: %d\n", player1.score);
    printf("Player2 name is: %s\n", player2.name);
    printf("Player2 score is: %d\n", player2.score);


    return 0;
}