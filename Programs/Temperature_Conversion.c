#include <stdio.h>
#include <ctype.h>

int main() {

    char unit;
    float temp;

    printf("\nIs the temperature in (F) or (C)?: ");
    scanf("%c", &unit);

    unit = toupper(unit);

    switch(unit){
        case 'C':
            printf("Type the temp in Celsius: ");
            scanf("%f", &temp);
            temp = (temp * 9/5) + 32;
            printf("The temperature in Celsius to Fahrenheit is: %.1f°F\n", temp);
            break;
        case 'F':
            printf("Type the temp in Fahrenheit: ");
            scanf("%f", &temp);
            temp = (temp - 32) * 5/9;
            printf("The temperature in Fahrenheit to Celsius is: %.1f°C\n", temp);
            break;
        default:
            printf("Please enter only F or C.");
            break;
    }

    return 0;
}
