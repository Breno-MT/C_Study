#include <stdio.h>

enum Day{Sun = 1, Mon = 2, Tue = 3, Wed = 4, Thu = 5, Fri = 6, Sat = 7};

int main() {

    // enum = a user defined type of named integer identifiers
    // helps to make a program more readable

    enum Day today = Fri;

    // printf("%d", today); // enums are NOT STRINGS, but they can be treated as int

    switch (today)
    {
    case Sun:
        printf("Already Sunday? damn...\n");
        break;
    case Mon:
        printf("it's monday. :(\n");
        break;
    case Tue:
        printf("replay time -_-\n");
        break;
    case Wed:
        printf("i... i survived...\n");
        break;
    case Thu:
        printf("1... 1 more... day...\n");
        break;
    case Fri:
        printf("It's FRIDAY FRIDAYYYY! *-*\n");
        break;
    case Sat:
        printf("YESS!!!!!!\n");
        break;
    
    default:
        break;
    }

    return 0;
}