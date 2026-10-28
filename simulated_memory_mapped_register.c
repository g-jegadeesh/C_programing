
#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint8_t REGISTER = 0x00;
    uint8_t *reg_ptr = &REGISTER;

    printf("Initial Register : 0x%02X\n", *reg_ptr);

    *reg_ptr = 0x5A;
    printf("Written Value : 0x%02X\n", *reg_ptr);

    printf("Register Value : 0x%02X\n", *reg_ptr);

    return 0;
}
