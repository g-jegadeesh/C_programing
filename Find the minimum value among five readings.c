#include <stdio.h>

int main() {
    int a[5], i, min;

    printf("Enter 5 readings:\n");

    for (i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    min = a[0];

    for (i = 1; i < 5; i++) {
        if (min > a[i]) {
            min = a[i];
        }
    }

    printf("Minimum value is: %d\n", min);

    return 0;
}
