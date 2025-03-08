#include <stdio.h>
int main(){
    char word[1000];
    char cap;
    scanf("%s",&word);

    if(word[0]>96){
        word[0]=word[0]-32;
    }

    printf("%s",word);


}