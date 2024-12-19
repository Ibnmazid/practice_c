#include <stdio.h>
int main(){
    float number[4];
    float min,max=0,dif;

    for(int i=0;i<4;i++){
        printf("Enter %d No. nuMbeR(Should be real):",i+1);
        scanf("%f",&number[i]);
    }

    for(int i=0;i<4;i++){
        if(number[i]>max){
            max=number[i];
        }
        }
    min=number[0];
    for(int i=0;i<4;i++){
        if (number[i]<min)
        {
            min=number[i];
        }
    }
    dif=max-min;
    printf("\nmax:%.2f",max);
    printf("\nmin:%.2f",min);
    printf("\ndifference:%.2f",dif);


}