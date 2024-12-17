#include <stdio.h>
int main(){
    float principle,rate_of_interest,time,simple_interest;

    printf("Enter Principle:");
    scanf("%f",&principle);

    printf("Enter Rete of interest:");
    scanf("%f",&rate_of_interest);

    printf("Enter Duration:");
    scanf("%f",&time);

    simple_interest=(principle*rate_of_interest*time)/100;

    printf("Simple Interest:%.2f",simple_interest);

}