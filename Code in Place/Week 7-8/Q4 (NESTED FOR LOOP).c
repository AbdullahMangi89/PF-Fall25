#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        
        for (j = 1; j <= n; j++) {
            if ((i + j) % 2 == 0) {  
                printf("(%d,%d) ", i, j);
            }
        }
    }

    return 0;
}
