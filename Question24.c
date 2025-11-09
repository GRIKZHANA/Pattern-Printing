#include <stdio.h>

int main() {
    int n = 5;

    for(int i = 1; i <= n; i++) {

        // Leading spaces
        for(int s = 1; s <= n - i; s++)
            printf("  ");

        // Hollow square shifted (rhombus)
        for(int j = 1; j <= n; j++) {
            if(i == 1 || i == n || j == 1 || j == n)
                printf("* ");
            else
                printf("  ");
        }

        printf("\n");
    }

    return 0;
}
