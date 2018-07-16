#include <stdio.h>

void rush(int col, int row) {
    int r;
    int c;

    r = 0;
    while (r < row) {
        c = 0;
        while (c < col) {
            if (r == 0 && (c == 0 || c == col - 1)
                || r == row - 1 && (c == 0 ||
                    c == col - 1)) {
                printf("o");
            } else if (r == 0 || r == row - 1) {
                printf("-");
            } else if (c == 0 || c == col - 1) {
                printf("|");
            } else {
                printf(" ");
            }
            c++;
        }
        printf("\n");
        r++;
    }
}

int main() {
    rush(4, 4);
    return 0;
}