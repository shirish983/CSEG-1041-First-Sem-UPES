#include <stdio.h>
int main(){
    int a = 40;
    int  b = 60;
    int temp;
    printf("before swapping :a = %d,b=%d\n",a,b);
    temp = a;
    a= b;
    b= temp;
    printf("after swapping:a =%d,b=%d\n",a,b);
    return 0;

}
