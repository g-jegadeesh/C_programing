#include <stdio.h>
#include <stdint.h>

int main() {

int reg = 0x00;

int a,b,e;

char S,C,T,Q,d;

printf("Enter hexa value:0x");
scanf("%x",&reg);

printf("choose bit position (0-7):");
scanf("%d",&a);

printf("choose a operation(s/C/T/Q):");
scanf(" %c",&d);

switch(d) {
case 'S' :
reg |= (1 << a);
printf("Uptated register in hexa:0x%x",reg);
break;

case 'C':
reg &= ~(1 << a);
printf("Uptated register in hexa:0x%x",reg);
break;

case 'T':
reg ^= (1 << a);
printf("Uptated register in hexa:0x%x",reg);
break;

case 'Q' :

if(reg & (1 << a))
printf("Bit %d status in hexa:0x%x", a, reg);

else
   printf("BIT %d NOT SET",a);
break;

default:
printf("ERROR");
break;
}

return 0;
}
