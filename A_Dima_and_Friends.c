#include <stdio.h>
int main(){
    int n,sumf=0,count=0;
    int f;

    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%d",&f);
        sumf+=f;

    }

    for(int i=1;i<=5;i++){
        if((sumf+i)%(n+1)!=1){
            count++;
        }
    }
    printf("%d",count);
}