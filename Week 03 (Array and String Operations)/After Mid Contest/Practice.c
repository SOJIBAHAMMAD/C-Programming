#include <stdio.h>

int main() {
    int i, j;

    // Upper half
    for (i = 1; i <= 4; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    // Lower half
    for (i = 3; i >= 1; i--) {
        // Print leading spaces
        for (j = 1; j <= 4 - i; j++) {
            printf(" ");
        }
        // Print numbers
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
