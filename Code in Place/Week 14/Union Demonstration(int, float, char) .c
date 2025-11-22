#include <stdio.h>

union Data {
    int i;
    float f;
    char c;
};

int main() {
    union Data d;

    d.i = 100;
    printf("After assigning int:\n");
    printf("d.i = %d\n", d.i);
    printf("d.f = %f\n", d.f);
    printf("d.c = %c\n\n", d.c);

    d.f = 3.14;
    printf("After assigning float:\n");
    printf("d.i = %d\n", d.i);
    printf("d.f = %f\n", d.f);
    printf("d.c = %c\n\n", d.c);

    d.c = 'A';
    printf("After assigning char:\n");
    printf("d.i = %d\n", d.i);
    printf("d.f = %f\n", d.f);
    printf("d.c = %c\n", d.c);

    return 0;
}