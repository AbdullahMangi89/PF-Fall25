#include <stdio.h>

int main() {
    int i = 1, j;

    while (i <= 5) {
        j = 1;
        printf("\nMultiplication Table of %d:\n", i);

        while (j <= 10) {
            printf("%d x %d = %d\n", i, j, i * j);
            j++;
        }

        i++;
    }

    return 0;
}
