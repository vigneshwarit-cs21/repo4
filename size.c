#include<stdio.h>
int main() {
    int intType;
    float floatType;
    double doubleType;
    

    // sizeof evaluates the size of a variable
    printf("Size of int: %zu bytes\n", sizeof(intType));
    printf("Size of float: %zu bytes\n", sizeof(floatType));
    printf("Size of double: %zu bytes\n", sizeof(doubleType));
    
    
    return 0;
}
