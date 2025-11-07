#include <stdio.h>

int main() {
    int n = 5;

    // Upper part
    for(int i = 1; i <= n; i++) {

        // Left part
        for(int j = 1; j <= i; j++) {
            if(j == 1 || j == i)
                printf("* ");
            else
                printf("  ");
        }

        // Middle spaces
        for(int j = 1; j <= 2*(n-i); j++)
            printf("  ");

        // Right part
        for(int j = 1; j <= i; j++) {
            if(j == 1 || j == i)
                printf("* ");
            else
                printf("  ");
        }

        printf("\n");
    }

    // Lower part
    for(int i = n; i >= 1; i--) {

        // Left part
        for(int j = 1; j <= i; j++) {
            if(j == 1 || j == i)
                printf("* ");
            else
                printf("  ");
        }

        // Middle spaces
        for(int j = 1; j <= 2*(n-i); j++)
            printf("  ");

        // Right part
        for(int j = 1; j <= i; j++) {
            if(j == 1 || j == i)
                printf("* ");
            else
                printf("  ");
        }

        printf("\n");
    }

    return 0;
}
