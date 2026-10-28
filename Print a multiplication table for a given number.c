#include <stdio.h>

int main() {
    int a, b, i;

    printf("Enter multiplication number: ");
    scanf("%d", &a);

    printf("Enter multiplication range: ");
    scanf("%d", &b);

    for (i = 1; i <= b; i++) {
        printf("%d x %d = %d\n", a, i, a * i);
    }

    return 0;
}
