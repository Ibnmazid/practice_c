#include <stdio.h>
int main(){
    int x;
    float sum=0.0;
    printf("Enter the value of N:");
    scanf("%d",&x);

    for(int i=1;i<=x;i++){
        printf("1/%d",i);
        sum+=1.0/i;
        if(i<x){
            printf("+");
        }
        else{
            printf("=");
        }
    }
    printf("%.2f",sum);
    
}