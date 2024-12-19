#include <stdio.h>
int main(){
    int number,temp,r_number=0;
    number=123456;

    while(number>=1){
        temp=number%10;

        r_number=r_number*10+temp;
        number=number/10;
    }
    printf("Reversed Number:%d",r_number);



}