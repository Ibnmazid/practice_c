#include <stdio.h>
int main(){
    int row,col,val,n=5;

    for(row=1;row<=n;row++){
        for(col=1;col<=n-row;col++){
            printf(" ");
        }
        val=1;
        for(int k=1;k<=row;k++){
            printf("%d ",val);
            val=val*(row-k)/k;
        }
        printf("\n");
    }
}