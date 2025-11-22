#include <stdio.h>

int main() {
    int a = 10;
    float b = 3.5;
    char c = 'A';

    int *pInt = &a;
    float *pFloat = &b;
    char *pChar = &c;

    printf("Value of int using pointer: %d\n", *pInt);
    printf("Value of float using pointer: %.2f\n", *pFloat);
    printf("Value of char using pointer: %c\n", *pChar);

    return 0;
}

