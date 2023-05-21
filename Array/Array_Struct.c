#include <stdio.h>
#include <string.h>

typedef struct {
    char name[12];
    float gpa;
} Student;


int main() {

    Student student1 = {
        "Bro",
        2.5,
    };
    Student student2 = {
        "Bra",
        4.0,
    };
    Student student3 = {
        "Bruh",
        1.0,
    };
    Student student4 = {
        "Bru",
        3.2,
    };

    Student students[] = {student1, student2, student3, student4};

    for(int i = 0; i < sizeof(students) / sizeof(students[0]); i++) {
        printf("%-12s\t", students[i].name);
        printf("%.2f", students[i].gpa);
        printf("\n---\n");
    }

    return 0;
}