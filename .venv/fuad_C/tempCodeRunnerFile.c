#include <stdio.h>
int main(){
    int elements[5];
    int x,value_x;

    for (int i=0;i<5;i++){
        printf("Enter the %d No. Element:",i+1);
        scanf("%d",&elements[i]);
    }
    printf("Which No element you want:");
    scanf("%d",&x);
    value_x=elements[x-1];

    printf("N[%d]=%d",x,value_x);


}