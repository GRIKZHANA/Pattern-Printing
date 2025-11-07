#include <stdio.h>

int main() {
    int n = 5;
    char ch;

    for(int i = 1; i <= n; i++) {
        ch = 'A'; // start from A in each row
        for(int j = 1; j <= i; j++) {
            printf("%c ", ch);
            ch++;
        }
        printf("\n");
    }

    return 0;
}
