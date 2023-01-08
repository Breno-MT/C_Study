#include <stdio.h>

void addFunction() {
    double first_number;
    double second_number;

    printf("\nEnter the first number: ");
    scanf("%lf", &first_number);
    printf("\nEnter the second number: ");
    scanf("%lf", &second_number);    

    double result = first_number + second_number;
    printf("\nThe result is: %.2lf\n", result);
}

void subFunction() {
    double first_number;
    double second_number;

    printf("\nEnter the first number: ");
    scanf("%lf", &first_number);
    printf("\nEnter the second number: ");
    scanf("%lf", &second_number);    

    double result = first_number - second_number;
    printf("\nThe result is: %.2lf\n", result);
}

void multFunction() {
    double first_number;
    double second_number;

    printf("\nEnter the first number: ");
    scanf("%lf", &first_number);
    printf("\nEnter the second number: ");
    scanf("%lf", &second_number);    

    double result = first_number * second_number;
    printf("\nThe result is: %.2lf\n", result);

}

void divFunction() {
    
    double first_number;
    double second_number;

    printf("\nEnter the first number: ");
    scanf("%lf", &first_number);
    printf("\nEnter the second number: ");
    scanf("%lf", &second_number);    

    if(first_number <= 0){
        printf("\nThe Numerator cannot be 0 or less than 0!\n");
    }
    else if(second_number <= 0){
        printf("\nThe Denominator cannot be 0 or less than 0!\n");
    }
    else{
        double result = first_number / second_number;
        printf("\nThe result is: %.2lf\n", result);
    }
}

int main(){

    char operator;

    printf("\nEnter the operator to use(+,-,*,/): ");
    scanf("%c", &operator);

    switch(operator){
        case '+':
            addFunction();
            break;
        case '-':
            subFunction();
            break;
        case '*':
            multFunction();
            break;
        case '/':
            divFunction();
            break;
        default:
            printf("\nPlease enter a valid operator, i.e: +, -, *, /\n");
            break;
    }

    return 0;
}