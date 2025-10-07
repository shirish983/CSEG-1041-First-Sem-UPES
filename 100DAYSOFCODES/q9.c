#include<stdio.h>
#include<math.h>
int main (){
    float principle =6000;
    float rate = 9;
    float  time  =5;
    float simpleinterest,compoundinterest,amount;
    simpleinterest=(principle*rate*time)/100;
    amount = principle*pow((1+rate/100),time);
    compoundinterest =amount - principle;
    printf("principle=%.2f\n",principle);
    printf("rate =%.2f\n",rate);
    printf("simpleinterest=%.2f\n",simpleinterest);
    printf("time =%.2f\n",time);
    printf("compoundinterest=%.2f\n",compoundinterest);
    return 0;
}
