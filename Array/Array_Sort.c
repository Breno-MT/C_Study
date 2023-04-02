#include <stdio.h>

void sort(char array[], int size) {
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - 1; j++){
            if(array[j] > array[j+1]) {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}

void printArray(char array[], int size) {
    for(int i = 0; i < size; i++) {
        printf("%c ", array[i]);
        printf("\n");
    }
}

int main(){

    // int array[] = {9,1,4,7,3,5,2,6,8};
    char array[] = {'F', 'B', 'Z', 'Y', 'A', 'V', 'E'};

    size_t size = sizeof(array) / sizeof(array[0]);

    sort(array, size);
    printArray(array, size);

    return 0;
}