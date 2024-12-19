#include <stdio.h>
#include <math.h>

int main(){
    double x,c_value;

    printf("Input value of X:");
    scanf("%lf",&x);

    if(x!=0){
        c_value=sin(1/x);
        printf("sin(1/%.2lf) corresponding value is: %.4lf",x,c_value);
    }
    else{
        printf("Input value should not be zero.!");
    }
}