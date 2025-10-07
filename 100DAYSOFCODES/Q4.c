#include <stdio.h>
#define pi  3.141
int main(){
    float radius = 10;
    float area = pi * radius* radius;
    float circumference = 2*pi*radius;
    printf("radius =%.2f\n",radius);
    printf("area =%.2f\n",area);
    printf("circumference=%.2f\n",circumference);
    return 0;
     
}
