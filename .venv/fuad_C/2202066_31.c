#include <stdio.h>
int main(){
    int user_input;
    printf("Enter a number:");

    scanf("%d",&user_input);

    if(user_input >0 && (user_input%2)==0){
        printf("Positive even");
    }
    else if (user_input <0 && (user_input %2==0) ){
        printf("negative even");

    }
    else if (user_input >0 && (user_input %2!=0) ){
        printf("positive odd");

    }
    else if (user_input <0 && (user_input %2!=0) ){
        printf("negative odd");

    }

   
    
}