#include <stdio.h>

int main() {
    // Kiểu char
    char character = 'A'; // Ký tự 'A'

    // Kiểu unsigned char
    unsigned char uChar = 25;

    // Kiểu int
    int integer = -100;

    // Kiểu unsigned int
    unsigned int uInteger = 18;

    // Kiểu short:
    short shortInt = -32;

    // Kiểu unsigned short
    unsigned short uShortInt = 65; 

    // Kiểu long
    long longInt = 12345; 

    // Kiểu unsigned long
    unsigned long uLongInt = 987;

    // Kiểu float
    float floatNumber = 3.14; 

    // Kiểu double
    double doubleNumber = 3.141; 

    // Kiểu long double
    long double longDoubleNumber = 3.1415;

    // In ra các giá trị 
    printf("Character: %c\n", character);
    printf("Unsigned Char: %u\n", uChar);
    printf("Integer: %d\n", integer);
    printf("Unsigned Integer: %u\n", uInteger);
    printf("Short: %d\n", shortInt);
    printf("Unsigned Short: %u\n", uShortInt);
    printf("Long: %ld\n", longInt);
    printf("Unsigned Long: %lu\n", uLongInt);
    printf("Float: %.2f\n", floatNumber);
    printf("Double: %.11f\n", doubleNumber);
    printf("Long Double: %.20Lf\n", longDoubleNumber);

    return 0;
}
