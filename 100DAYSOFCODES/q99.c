#include <stdio.h>

int main() {
    char date[20], day[3], month[3], year[5];
    fgets(date, sizeof(date), stdin);
    day[0] = date[0];
    day[1] = date[1];
    day[2] = '\0';
    month[0] = date[3];
    month[1] = date[4];
    month[2] = '\0';
    year[0] = date[6];
    year[1] = date[7];
    year[2] = date[8];
    year[3] = date[9];
    year[4] = '\0';
    char mon[4];
    if(strcmp(month,"01")==0) strcpy(mon,"Jan");
    else if(strcmp(month,"02")==0) strcpy(mon,"Feb");
    else if(strcmp(month,"03")==0) strcpy(mon,"Mar");
    else if(strcmp(month,"04")==0) strcpy(mon,"Apr");
    else if(strcmp(month,"05")==0) strcpy(mon,"May");
    else if(strcmp(month,"06")==0) strcpy(mon,"Jun");
    else if(strcmp(month,"07")==0) strcpy(mon,"Jul");
    else if(strcmp(month,"08")==0) strcpy(mon,"Aug");
    else if(strcmp(month,"09")==0) strcpy(mon,"Sep");
    else if(strcmp(month,"10")==0) strcpy(mon,"Oct");
    else if(strcmp(month,"11")==0) strcpy(mon,"Nov");
    else if(strcmp(month,"12")==0) strcpy(mon,"Dec");
    printf("%s-%s-%s", day, mon, year);
    return 0;
}
