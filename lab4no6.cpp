#include <stdio.h>

int main() {
    char f;
    int n;

    scanf(" %c %d", &f, &n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%c", f);
        }
        printf("\n");
    }

    return 0;
}




