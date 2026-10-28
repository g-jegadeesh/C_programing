#include <stdio.h>

int main() {
    int i, n, sum = 0;

    printf("Enter sum range: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum = sum + i;
    }

    printf("Sum = %d\n", sum);

    return 0;
}
