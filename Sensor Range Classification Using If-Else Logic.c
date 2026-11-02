#include <stdio.h>
int main() {

float a;

printf("Enter sensor reading:");
scanf("%f",&a);

if(a>=0 && a <= 19){
printf("LOW");}

else if(a>19 && a <= 69){
printf("NORMAL"); }

else if(a>69 && a <= 89){
printf("HIGH\n");
printf("Warning: Sensor value is above normal range.");
}

else if(a>89 && a <= 100){
printf("CRITICAL\n");
printf("Warning: Sensor value is above high range.");
}

else {

printf("Error");
}

return 0;
}
