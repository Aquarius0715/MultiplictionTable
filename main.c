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

    printf("\n  ----------------------------\n");

    for (int ii = 1; ii < 10; ii++) {
        printf("%d |", ii);
        for (int iii = 1; iii < 10; iii++) {
            if (ii * iii < 10) {
                printf("  %d", ii * iii);
            } else {
                printf(" %d", ii * iii);
            }
        }
        printf("\n");
    }
    return 0;
}