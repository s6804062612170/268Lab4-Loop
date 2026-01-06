#include <stdio.h>

int main() {
    char f;
    int x, y;

    scanf(" %c %d %d", &f, &x, &y);

    for (int i = 0; i < y; i++) {
        for (int j = 0; j < x; j++) {
            printf("%c", f);
        }
        printf("\n");
    }

    return 0;
}


