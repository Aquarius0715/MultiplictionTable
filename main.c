#include <stdio.h>

int printMultiplicationTable() {

    for (int ii = 1; ii < 10; ii++) {
        if (ii == 1) {
            printf(" ");
            printf("  %d", ii);
        } else {
            printf("  %d", ii);
        }
    }

    printf("\n");
        for (int I = 1; I < 10; I++) {
            printf("%d", I);
            for (int II = 1; II < 10; II++) {
                if (I * II < 10) {
                    printf(" 0%d", I * II);
                } else {
                    printf(" %d", I * II);
                }
            }
            printf("\n");
        }
}

int main() {
    printMultiplicationTable();
    return 0;
}
