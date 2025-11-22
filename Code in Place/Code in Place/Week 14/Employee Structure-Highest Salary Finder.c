#include <stdio.h>
#include <string.h>

struct Employee {
    char name[50];
    int id;
    float salary;
    char department[50];
};

int main() {
    struct Employee emp[5];
    int i, maxIndex = 0;


    for (i = 0; i < 5; i++) {
        printf("\nEnter details for Employee %d:\n", i + 1);

        printf("Name: ");
        scanf(" %[^\n]", emp[i].name);

        printf("ID: ");
        scanf("%d", &emp[i].id);

        printf("Salary: ");
        scanf("%f", &emp[i].salary);

        printf("Department: ");
        scanf(" %[^\n]", emp[i].department);
    }

    for (i = 1; i < 5; i++) {
        if (emp[i].salary > emp[maxIndex].salary) {
            maxIndex = i;
        }
    }


    printf("\n\nEmployee with Highest Salary:\n");
    printf("Name       : %s\n", emp[maxIndex].name);
    printf("ID         : %d\n", emp[maxIndex].id);
    printf("Salary     : %.2f\n", emp[maxIndex].salary);
    printf("Department : %s\n", emp[maxIndex].department);

    return 0;
}