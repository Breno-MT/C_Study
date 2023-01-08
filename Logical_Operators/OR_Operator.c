#include <stdio.h>
#include <string.h>

int main(){

    char name[] = "Breno";

    if(strcmp(name, "Breno") == 0 || strcmp(name, "Martins") == 0){
        printf("\nYou have a beautiful name! :D\n");
    }
    else{
        printf("\nYour name is not beautiful! D:\n");
    }

    return 0;
}