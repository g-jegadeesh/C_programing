#include <stdio.h>

int main() {
    int a;

    printf("Enter the value (0 or 1): ");
    scanf("%d", &a);

    if (a == 0) {
        printf("LED OFF");
    }
    else if (a == 1) {
        printf("LED ON");
    }
    else {
        printf("Invalid input. Enter 0 or 1 only.");
    }

    return 0;
}
