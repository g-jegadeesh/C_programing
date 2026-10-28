#include <stdio.h>

int main() {
    float a;

    printf("Enter the temperature: ");
    scanf("%f", &a);

    if (a < 20) {
        printf("Cold");
    }
    else if (a <= 35) {
        printf("Normal");
    }
    else {
        printf("High Temperature");
    }

    return 0;
}
