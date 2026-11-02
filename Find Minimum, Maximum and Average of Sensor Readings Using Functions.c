#include <stdio.h>

float minimum(float arr[], int a) {

float b = arr[0];
for(int i=0;i<a; i++){
if(arr[i] < b){
b=arr[i];}}

return b;
}

float maximum(float arr[], int a) {

float c = arr[0];

for(int i=0;i<a; i++){
if(arr[i] > c){
c=arr[i];}}

return c;
}

float average(float arr[], int a) {

float d=0,e;

for(int i=0;i<a;i++){
d += arr[i]; }

e = d/a;

return e;
}

int main() {
int a,j;
float b, c,e;

printf("Enter number of readings:");
scanf("%d",&a);

float arr[a];

printf("Enter readings:\n");
for(j=0;j<a; j++) {
scanf("%f", &arr[j]);
}

b = minimum(arr,a);
c = maximum(arr,a);
e = average(arr, a);

printf("Minimum value: %f\n",b);
printf("Maximum value: %f\n",c);
printf("Average value: %f\n", e);

return 0;
}
