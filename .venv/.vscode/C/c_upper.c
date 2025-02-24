#include <stdio.h>
int main(){
    printf("give me character:");

    char userc;
    userc=getchar();

    if(userc>=65 && userc <= 90){
        userc+=32;
        printf("character: %c",userc);
    }
    else if (userc>=90 && userc<=122)
    {
        userc-=32;
        printf("Character:%c",userc);
    }
    
    
}