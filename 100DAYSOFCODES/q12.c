#include <stdio.h>
int main(){
    int a;
    printf("enter an integer:");
    scanf("%d",&a);
    if(a>=0){
        if(a==0){
            printf("zero\n");

        }else{
            printf("positive\n");
        }
    }else {
            printf("negative\n");
        }
    

}
