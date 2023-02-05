#include <stdio.h>


int main(){

    double prices[] = {5.12, 10.0, 2.5, 20.0, 90.51, 12.5};

    size_t arrayLength = sizeof(prices)/sizeof(prices[0]);

    // printf("%zu", result);


    for(int i = 0; i < arrayLength; i++){
        printf("$%.2lf\n", prices[i]);
    }


    return 0;
}