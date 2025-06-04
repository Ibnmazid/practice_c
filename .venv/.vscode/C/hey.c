#include <stdio.h>
int main(){
    int n=3;
    int row,coloum;

    for(row=1;row<=n;row++){
        for(int s=1;s<=n-row;s++){
            printf(" ");
        
        }
        for(coloum=1;coloum<=row;coloum++){
            printf("%d",coloum);
        }
        for(coloum=row-1;coloum>=1;coloum--){
            printf("%d",coloum);
        }
        printf("\n");
    }
    for(row=n-1;row>=1;row--){
        for(int s=1;s<=n-row;s++){
            printf(" ");
        
        }
        for(coloum=1;coloum<=row;coloum++){
            printf("%d",coloum);
        }
        for(coloum=row-1;coloum>=1;coloum--){
            printf("%d",coloum);
        }
        printf("\n");
    }
}