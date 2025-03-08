#include <stdio.h>
#include <math.h>
int main(){
    int matrix[5][5];
    int row,col;

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            scanf("%d",&matrix[i][j]);
            if(matrix[i][j]==1){
                row=i+1;
                col=j+1;
            }
        }
    }
    int moves=(abs(row-3)+abs(col-3));
    printf("%d",moves);
}