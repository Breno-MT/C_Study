#include <stdio.h>
#include <string.h>

// typedef char user[25];

typedef struct {
    char name[25];
    char password[12];
    int id;
} User;

int main() {

    // typedef = reserved keyword that gives an existing datatype a "nickname"
    // user user1 = "Bro";

    User user1 = {
        "Bro",
        "broitspwd",
        123456779,
    };

    User user2 = {
        "Bra",
        "broatspwd",
        1234555,
    };

    printf("\nUser: %s\n", user1.name);
    printf("Password: %s\n", user1.password);
    printf("Id: %d", user1.id);
    printf("\n---\n");
    printf("User: %s\n", user2.name);
    printf("Password: %s\n", user2.password);
    printf("Id: %d\n", user2.id);

    return 0;
}