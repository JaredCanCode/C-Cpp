#include <stdio.h>

int main() {
    int sideLength = 5;
    int bot = 7;

    for (int i = 0; i < sideLength; i++) {
        for (int j = 0; j < bot; j++) {
            if (i == 0 || i == sideLength - 1 || j == 0 || j == bot - 1) {
                printf("+ ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}
