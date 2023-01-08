#include <stdio.h>

int main(){

    int age;

    printf("\nEnter your age: ");
    scanf("%d", &age);

    if(age >= 18){
        printf("\nYou're now signed up!\n");
    }

    else if(age == 0){
        printf("\nYou can't sign up! You were just born!\n");
    }

    else if(age < 0){
        printf("\nYou haven't been born yet!\n");
    }

    else{
        printf("\nYou're too young to sign up!\n");
    }

    return 0;
}
