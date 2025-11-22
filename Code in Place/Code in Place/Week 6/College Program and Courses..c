#include <stdio.h>

int main() {
    int program, year;

    printf("Enter program type:\n");
    printf("1 = Computer Science\n");
    printf("2 = Electrical Engineering\n");
    printf("Your choice: ");
    scanf("%d", &program);

    switch (program) {
        case 1:
            printf("\nYou selected Computer Science.\n");
            printf("Enter year:\n");
            printf("1 = First Year\n");
            printf("2 = Second Year\n");
            printf("Your choice: ");
            scanf("%d", &year);

            switch (year) {
                case 1:
                    printf("\nFirst Year Computer Science Courses:\n");
                    printf("1. Introduction to Programming\n");
                    printf("2. Discrete Mathematics\n");
                    printf("3. Computer Fundamentals\n");
                    break;
                case 2:
                    printf("\nSecond Year Computer Science Courses:\n");
                    printf("1. Data Structures\n");
                    printf("2. Object-Oriented Programming\n");
                    printf("3. Operating Systems\n");
                    break;
                default:
                    printf("Invalid year entered.\n");
            }
            break;

        case 2: 
            printf("\nYou selected Electrical Engineering.\n");
            printf("Enter year:\n");
            printf("1 = First Year\n");
            printf("2 = Second Year\n");
            printf("Your choice: ");
            scanf("%d", &year);

            switch (year) {
                case 1:
                    printf("\nFirst Year Electrical Engineering Courses:\n");
                    printf("1. Basic Electrical Engineering\n");
                    printf("2. Engineering Mathematics\n");
                    printf("3. Physics\n");
                    break;
                case 2:
                    printf("\nSecond Year Electrical Engineering Courses:\n");
                    printf("1. Circuit Theory\n");
                    printf("2. Electromagnetics\n");
                    printf("3. Electrical Machines\n");
                    break;
                default:
                    printf("Invalid year entered.\n");
            }
            break;

        default:
            printf("Invalid program type entered.\n");
    }

    return 0;
}
