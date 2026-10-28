#include <stdio.h>

int main() {
    int a;

    printf("1 - Red\n");
    printf("2 - Green\n");
    printf("3 - Blue\n");

    printf("Select LED colour: ");
    scanf("%d", &a);

    switch (a) {
        case 1:
            printf("Red LED");
            break;

        case 2:
            printf("Green LED");
            break;

        case 3:
            printf("Blue LED");
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}
