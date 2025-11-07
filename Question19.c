#include <stdio.h>

int main() {
    int n = 5, coef;

    for(int i = 0; i < n; i++) {
        coef = 1;

        // Leading spaces
        for(int s = 1; s <= n - i; s++)
            printf("  ");

        // Row values
        for(int j = 0; j <= i; j++) {
            printf("%d   ", coef);
            coef = coef * (i - j) / (j + 1);
        }

        printf("\n");
    }

    return 0;
}
