#include <stdio.h>

void birthday(char name[], int age){

    printf("\nHappy birthday dear %s!\n", name);
    printf("\nYou're %d years old!\n", age);

}

int main(){

    char name[] = "Breno";
    int age = 21;

    birthday(name, age);

    return 0;
}