#include <stdio.h>
int main(){
int a,b,c;
printf("Enter Three Numbers:");
scanf("%d %d %d",&a, &b, &c);
if(a>=b && a>=c)
printf("Largest value is= %d",a);
else if (b>=a && b>=c)
printf("Largest value is=%d", b);
else
printf("Largest value is=%d",c);
return 0;
}
