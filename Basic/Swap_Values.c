#include <stdio.h>
#include <string.h>

int main(){

    char x[50] = "water";
    char y[50] = "lemonade";
    char temp[50];

    strcpy(temp, x); // temp = x;
    strcpy(x, y); // x = y;
    strcpy(y, temp); // y = temp;

    printf("x = %s\n", x);
    printf("y = %s\n", y);

    return 0;
}