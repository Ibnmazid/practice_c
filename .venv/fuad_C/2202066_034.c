#include <stdio.h>
int main(){
    int peack_point,lowest_point,sum_odd=0;

    printf("Enter the range(peack Point:lowest Point):");
    scanf("%d:%d",&peack_point,&lowest_point);

    if(lowest_point>peack_point){
        printf("Your input is invaild format.");
    }
    else{

        for(int i=lowest_point;i<=peack_point;i++){
            if((i%2)==0){
                printf("%d \n",i);
                sum_odd+=i;
        }
    }
        printf("sum of odd number:%d",sum_odd);
    }
}