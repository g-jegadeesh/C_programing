#include <stdio.h>
int main() {

int a, c, largest, count, sum;
printf("Enter no.of elements:");
scanf("%d",&a);
int arr[a];

int *ptr = &arr[0];

printf("Enter the elements:\n");
for(int i=0;i<a; i++) {

scanf("%d",ptr);
ptr++;
}

largest = arr[0];
count = sum = 0;

for(int i=0;i<a;i++) {

ptr = &arr[i];

if(*ptr > largest) {
largest = *ptr;
}

if((*ptr % 2) == 0) {
count++;
}

if(*ptr > -999999) {
c = *ptr;
sum += c;
}
}

printf("Sum of all the elements: %d\n", sum);
printf("largest value is: %d\n", largest);
printf("even numbers: %d\n",count);

return 0;
}
