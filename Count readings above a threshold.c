#include <stdio.h>

int main() {
    int a[5] = {10, 20, 30, 50, 70};
    int threshold = 15;
    int i, count = 0;

    for (i = 0; i < 5; i++) {
        if (a[i] > threshold) {
            count++;
        }
    }

    printf("Threshold count: %d\n", count);

    return 0;
}
