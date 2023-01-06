#include <stdio.h>
#include <stdbool.h>

int main(){

    char a = 'C';                  // single character    %c
    char b[] = "Breno";            // array of characters %s  

    float c = 3.141592;                         // 4 bytes (32 bits of precision) 6 - 7 digits %f
    double d = 3.141592653589793; // 8 bytes (64 bits of precision) 15 - 16 digits %lf

    bool e = true;                        // 1 byte (true or false) %d // 1 or 0 = true or false
    

    // unsigned means that you can't store a negative number
    // by default all char are signed, i.e -> signed char f = 120; is the same as char f = 120;
    // You don't have to specify 'signed' in the beginning of the variable
    char f = 120;                         // 1 byte (-128 to +127) %d or %c
    unsigned char g = 255;       // 1 byte (0 to +255) %d or %c

    short h = 32767;                  // 2 bytes (−32,768 to +32,767) %d
    unsigned short i = 65535;  // 2 bytes (0 to +65,535) %d

    // int by default already is long, that's why you don't specify in the beginning, you could but it's not necessary.
    // i.e -> long int j = 1230912; is the same as int = j 1230912;
    // However, to specify a longer int more than +2,147,483,647, you have to use long twice
    // i.e -> long long int l = 9223372036854775807
    int j = 2147483647;                    // 4 bytes (-2,147,483,648 to +2,147,483,647) %d
    unsigned int k = 4294967295;  // 4 bytes (0 to +4,294,967,295) %u

    long long int l = 9223372036854775807;                         // 8 bytes (-9 quintillion to +9 quintillion) %lld
    // Because unsigned long long use more memory, you have to use U at the end of the number so you don't get a warning
    unsigned long long int m = 18446744073709551615U; // 8 bytes (0 to +18 quintillion) %llu

    printf("%c\n", a);  // char
    printf("%s\n", b);  // character array
    printf("%0.5f\n", c);  // float
    printf("%0.15lf\n", d); // double
    printf("%d\n", e);  // bool
    printf("%d\n", f);  // char as numeric value
    printf("%d\n", g);  // unsigned char as numeric value
    printf("%d\n", h);  // short
    printf("%d\n", i);  // unsigned short
    printf("%d\n", j);  // int
    printf("%u\n", k);  // unsigned int
    printf("%lld\n", l);  // long long int
    printf("%llu\n", m);  // unsigned long long int

    return 0;
}