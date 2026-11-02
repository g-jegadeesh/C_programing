#include <stdio.h>

int main() {

struct device {
int id;
char name [50];
float volt;
char status[10];
};

int a,device_id;
printf("Enter the number of devices:");
scanf("%d",&a);

struct device device[a];

for(int i=0;i<a; i++) {

printf("Enter Device ID %d:",i+1);
scanf("%d",&device[i].id);

printf("Enter Device name:");
scanf("%49s",device[i].name);

printf("Enter voltage:");
scanf("%f",&device[i].volt);

printf("Enter status:");
scanf("%9s",device[i].status);
}

printf("Enter a device id to search:");
scanf("%d",&device_id);

int found =0;

for(int i=0;i<a; i++) {
if(device_id == device[i].id) {
printf("Device found\n");
printf("Device ID:%d\n",device[i].id);
printf("Device name :%s\n",device[i].name);
printf("Device voltage:%f\n",device[i].volt);
printf("Device status :%s\n", device[i].status);
found = 1;
break;
}
}

if(found == 0){
printf("Device not found");
}

return 0;
}
