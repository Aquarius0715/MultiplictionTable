#include <stdio.h>

int main() {
    for (int i = 1; i < 10; i++) {
        if (i == 1) {
            printf("   ");
            printf("  %d", i);
        } else {
            printf("  %d", i);
        }
    }

    printf("\n  ----------------------------");

    printf("\n");
    for (int ii = 1; ii < 10; ii++) {
        printf("%d |", ii);
        for (int II = 1; II < 10; II++) {
            if (ii * II < 10) {
                printf(" 0%d", ii * II);
            } else {
                printf(" %d", ii * II);
            }
        }
        printf("\n");
    }
    return 0;
}