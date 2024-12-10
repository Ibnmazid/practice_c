#include <stdio.h>
int main(){
    float number[4]={1.25,1.35,1.85,1.13};
    float max=number[0], min=number[0];
    int i;

    for (i=0;i<4;i++){
        if(number[i]>max){
            max=number[i];
        }
        if(number[i]<min){
            min=number[i];
        }
    
    }
    printf("Minimum:%f\n",min);
    printf("Maximum:%f",max);
}