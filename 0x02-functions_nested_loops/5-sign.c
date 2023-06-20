#include <stdio.h>

int print_sign(int n) {
    if (n > 0) {
        printf("+");
        return 1; // Positive number
    } else if (n < 0) {
        printf("-");
        return -1; // Negative number
    } else {
        printf("0");
        return 0; // Zero
    }
}
