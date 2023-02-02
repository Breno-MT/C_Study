#include <stdio.h>

int main(){

    for(int i = 1; i <= 20; i++){
        if (i == 13){
            // break; // would complete stop the loop when it reached 13.
            continue;
        }
        printf("%d\n", i);
    }

    return 0;
}