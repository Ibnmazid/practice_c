#include <stdio.h>
int main(){
    float x,y,div;
    printf("Enter those number:");
    printf("\nx:");
    scanf("%f",&x);
    printf("y:");
    scanf("%f",&y);
    if (y==0){
        printf("Error");
    }
    else{
        div=x/y;
        printf("division:%.2f",div);
    }

}