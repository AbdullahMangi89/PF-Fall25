#include <stdio.h>

int main() {
    int num1, num2, num3, average;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    average = (num1 + num2 + num3) / 3;

    printf("The average of the three numbers is: %.d\n", average);
    return 0;
}
