#include <stdio.h>

int main() {
    int a[5] = {0, 1, 1, 0, 1};
    int i;

    for (i = 0; i < 5; i++) {
        printf("LED %d: ", i + 1);

        if (a[i] == 1) {
            printf("LED ON\n");
        }
        else {
            printf("LED OFF\n");
        }
    }

    return 0;
}
