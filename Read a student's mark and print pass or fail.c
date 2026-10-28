#include <stdio.h>

int main() {
    int a;

    printf("Enter the student mark: ");
    scanf("%d", &a);

    if (a >= 35) {
        printf("Pass");
    }
    else {
        printf("Fail");
    }

    return 0;
}
