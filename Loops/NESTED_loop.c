#include <stdio.h>

int main(){

    int rows, columns;
    char symbol;

    printf("\nEnter # of rows: ");
    scanf("%d", &rows);
    
    printf("\nEnter # of columns: ");
    scanf("%d", &columns);

    getchar();

    printf("\nEnter a symbol to use: ");
    scanf("%c", &symbol);

    for(int i = 1; i <= rows; i++){
        for(int j = 1; j <= columns; j++){
            printf("%c", symbol);
        }
        printf("\n");
    }


    return 0;
}