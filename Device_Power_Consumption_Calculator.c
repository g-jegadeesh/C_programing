#include <stdio.h>

int main()
{
    char a[30];
    float b, c, d, p;

    printf("Enter device model No: ");
    scanf("%29s", a);

    printf("Enter voltage: ");
    scanf("%f", &b);

    printf("Enter current: ");
    scanf("%f", &c);

    printf("Enter temperature: ");
    scanf("%f", &d);

    p = b * c;

    printf("\nDevice model: %s\n", a);
    printf("Supply voltage: %f V\n", b);
    printf("Current consumption: %f A\n", c);
    printf("Operating Temperature: %f C\n", d);
    printf("Power consumption: %f W\n", p);

    return 0;
}
