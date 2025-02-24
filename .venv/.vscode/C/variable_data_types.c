#include <stdio.h>
void average_of_number(void);
void counting_postive_number(void);

int main(){
    
    //average_of_number();
    counting_postive_number();



}
void average_of_number(void){
    int x;
    printf("Enter a lenth of number:");
    scanf("%d",&x);
    int sum=0;
    for(int i=0;i<=x;i++){
        sum+=i;
    }
    float average;
    average=(float)sum/x;
    printf("average:%.2f",average);
    
}
void counting_postive_number(void){
    int count_p=0,count_n=0;
    printf("How many number you want to enter:");
    int x;
    scanf("%d",&x);
    int number[x];

    for(int i=0;i<x;i++){
        printf("Enter set of number:");
        scanf("%d",&number[i]);
    } 
    for(int i=0;i<x;i++){
        

        if(number[i]>=0){
            printf("%d is postive \n ",number[i]);
            count_p++;
        }
        else{
            printf("%d is negative \n",number[i]);
            count_n++;
 
        }
    }
    printf("%d number are positive\n",count_p);
    printf("%d number are negative",count_n);
}