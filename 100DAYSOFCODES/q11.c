#include <stdio.h>
int main(){
    int num;
    printf("enter a integer");
    scanf("%d",&num);
    if(num % 2 ==0){
        printf("%d is even.\n",num);
        
    }
    else{
        printf("%s is odd.\n",num);

    }
    return 0;
}
