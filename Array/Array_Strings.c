#include <stdio.h>
#include <string.h>

int main(){

    char cars[][10] = {"Mustang", "Supra", "RX-7"};

    // to add more cars
    strcpy(cars[0], "Tesla");

    int arrayLength = sizeof(cars)/sizeof(cars[0]);

    for(int i = 0; i < arrayLength; i++){
        printf("%s\n", cars[i]);
    }

    return 0;
}