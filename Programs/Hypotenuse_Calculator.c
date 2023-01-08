#include <stdio.h>
#include <math.h>

int main() {

    double C;
    double A;
    double B;

    printf("\nEnter the side A value: ");
    scanf("%lf", &A);

    printf("\nEnter the side B value: ");
    scanf("%lf", &B);

    C = sqrt(pow(A, 2) + pow(B, 2));

    printf("\nThe Hypotenuse is: %lf\n", C);

    return 0;
}
