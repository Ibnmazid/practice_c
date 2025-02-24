#include <stdio.h>

float sum();
float power(float x,float y);

int main(){
    printf("\n\n\n");


    sum();
    printf("power:%.2f",power(3,3.5));
}

float sum (){
    printf("Enter Two integer Number {format(num1+num2)}:");
    float x,y;
    scanf("%f + %f",&x,&y);
    float res=x+y;
    printf("%.2f \n",res);
    return res;
}
float power(float x , float y){

    float res=1;
    for (int i=0;i<y;i++){
        res*=x;
    }
    return res;

}