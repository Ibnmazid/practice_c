#include <stdio.h>
int main(){
    int pass=1234,user_input;

    printf("Enter the password:");
    scanf("%d",&user_input);

    if(pass==user_input){
        printf("Authentication Successful");
    
    }
    else{
        printf("Authentication Error");

    }
}