#include <stdio.h>
int main() {

int i,a, large, second;

printf("Enter no.of elements:");
scanf("%d", &a);

int arr[a];

printf("Enter the elements:");
for(i=0;i<a;i++){
scanf("%d", &arr[i]); }

large = arr[0];
second = -99999;

for(i=0;i<a; i++) {
if(arr[i] > large) {
second = large;
large = arr[i]; }

else if (arr[i] > second && arr[i] != large){
second = arr[i];
}
}

printf("second largest value: %d", second);

return 0;
}
