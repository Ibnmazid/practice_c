#include <stdio.h>
int main(){
    int x,y;
    printf("Enter the number pair format(x:y):");
    scanf("%d:%d",&x,&y);

    if (x<y){
        printf("The pair is ascending format");

    }
    else{
        printf("The pair is discending format");
    }
}