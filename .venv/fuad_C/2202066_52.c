#include <stdio.h>
int main(){
    int elements[6];
    int index=0;

    for (int i=0;i<6;i++){
        printf("Enter the %d No. Element:",i+1);
        scanf("%d",&elements[i]);
    }
    int min=elements[0];
    for(int i=0;i<6;i++){
        if(elements[i]<min){
            min=elements[i];
            index=i;
        }
    }
    printf("Min[%d]=%d",index+1,min);
}