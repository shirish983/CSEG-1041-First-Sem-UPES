#include <stdio.h>
int main(){
    int seconds,hours,minutes;
    printf("enter time in seconds:");
    scanf("%d",&seconds);
    hours = seconds / 3600;
    seconds = seconds %3600;
    minutes = seconds /60;
    seconds = seconds %60;
    printf("time +%02d:%02d:%02d\n",hours,seconds,minutes);
    return 0;
}
