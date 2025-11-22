#include <stdio.h>
#include <string.h>

int main() {
    char firstName[20], lastName[20], fullName[40];

    printf("Enter your first name: ");
    gets(firstName);  

    printf("Enter your last name: ");
    gets(lastName);

    strcpy(fullName, firstName);   
    strcat(fullName, " ");        
    strcat(fullName, lastName);   

    printf("Full name: %s", fullName);

    return 0;
}
