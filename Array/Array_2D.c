#include <stdio.h>

int main() {

    // other way of declare Array 2D
    // int numbers[2][3];
    // numbers[0][0] = 1;
    // numbers[0][1] = 2;
    // numbers[0][2] = 3;
    // numbers[1][0] = 4;
    // numbers[1][1] = 5;
    // numbers[1][2] = 6;


    int numbers[3][3] = {{1,2,3}, {4,5,6}};

    int rows = sizeof(numbers) / sizeof(numbers[0]);
    int columns = sizeof(numbers[0]) / sizeof(numbers[0][0]);

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ", numbers[i][j]);
        }
        printf("\n");
    }

    return 0;
}