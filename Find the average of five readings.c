#include <stdio.h>

int main() {
    int a[5], i, sum = 0;
    float avg;

    printf("Enter 5 readings:\n");

    for (i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }

    avg = sum / 5.0;

    printf("Average = %.2f\n", avg);

    return 0;
}
