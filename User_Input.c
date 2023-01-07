#include <stdio.h>
#include <string.h>

int main() {

    int age;
    char name[25];

    printf("What's your name?: ");
    // scanf("%24s", name);
    fgets(name, 25, stdin);
    name[strlen(name)-1] = '\0';

    printf("\nHow old are you?: ");
    scanf("%d", &age);

    printf("Hello, %s! How are you?\n", name);
    printf("\nYou are %d years old!!!\n", age);

    return 0;
}
