#include <stdio.h>
#include <string.h>

void main(){
    char str[80];
    printf("Enter Your name:");
    scanf("%[^a]",str);

    
    printf("welcome %s",str);
}