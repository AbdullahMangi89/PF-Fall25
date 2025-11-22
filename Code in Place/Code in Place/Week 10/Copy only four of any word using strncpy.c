#include <stdio.h>
#include <string.h>

int main() {
    char source[] = "Programming";
    char destination[10];

    strncpy(destination, source, 4);

    destination[4] = '\0';

    printf("Copied string: %s", destination);

    return 0;
}
