#include <stdio.h>
int main(){
    int number[5]={2,3,7,8,9};

    int max,max_point;

    for (int i=0;i<5;i++){
        if(number[i]>0){
            max=number[i];
            max_point=i;
        }
    }


printf("max number is:%d \n position:%d",max,max_point+1);
}