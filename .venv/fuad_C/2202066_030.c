#include <stdio.h>
int main(){
    int user_input;

    printf("set a limit to evaluate the value of squire of even number(1 to _):");

    scanf("%d",&user_input);

    for (int i=0;i<=user_input;i++){
        if(i%2==0){
            printf("%d -",i*2); // even numer squire
        }
    }
}