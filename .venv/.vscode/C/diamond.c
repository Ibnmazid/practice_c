#include <stdio.h>
int main(){
    int row=5 ,i;

    for(i=1;i<=row;i++){
        for(int j=1;j<=row-i;j++){
            printf(" ");
        }
        for(int k=1;k<=2*i-1;k++){
            printf("*");
        }

        printf("\n");
    }
    int s=row-1;
    
    for(i=1;i<=row;i++){
        for(int j=1;j<=i;j++){
            printf(" ");
        }
        for(int k=1;k<=2*s-1;k++){
            printf("*");   
        }
        printf("\n");
        s--;
    }
}