#include <stdio.h>
int main(){
    printf("Enter number of row:");
    int row,spaces,i,j;
    scanf("%d",&row);

    for(i=1;i<=row;i++){
        for(spaces=1;spaces<=row-i;spaces++){
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++){
            printf("*");
        }
        printf("\n"); 
    }
}