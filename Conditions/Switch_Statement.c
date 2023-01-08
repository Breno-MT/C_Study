#include <stdio.h>

int main(){

    // switch = A more efficient alternative to using many "else if" statements
    // allows a value to be tested for equality against many cases

    char grade;

    printf("\nEnter a letter grade: ");
    scanf("%c", &grade);

    grade = toupper(grade);

    switch(grade){
        case 'A':
            printf("\nPerfect!\n");
            break;
        case 'B':
            printf("\nYou did good!\n");
            break;
        case 'C':
            printf("\nYou did okay.\n");
            break;
        case 'D':
            printf("\nAt least it's not an F!\n");
            break;
        case 'F':
            printf("\nYou Failed! Try harder next time! ;)\n");
            break;
        default:
            printf("\nPlease enter only valid grades! I.e: A,B,C,D,F\n");
            break;
    }

    return 0;
}