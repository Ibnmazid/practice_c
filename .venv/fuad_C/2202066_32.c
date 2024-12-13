#include <stdio.h>
int main(){
    int user_specified_number;

    printf("Enter the specified Number(Your number should be less then 100):");
    scanf("%d",&user_specified_number);

    for (int i=1;i<=100;i++){
        if((i%user_specified_number) ==3){
            printf("The special number is:%d \n",i);
        }
        else{
            printf("There is no special Number for You");
            break;
        }

    }
}