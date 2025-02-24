#include <stdio.h>
#include <math.h>
int main(){
    int number;
    printf("Enter a number:");
    scanf("%d",&number);

    if(number<2){
        printf("%d is not prime number.",number);
    }
    for(int i=2;i<=sqrt(number);i++){
        if(number%i==0){

            
            printf("%d is not a prime number.",number);
        }
    }
    
    printf("%d is a prime number.",number);
}