#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,dif,s1,s2;
    scanf("%d",&n);
    int height[n];
    for(int i=0;i<n;i++){
        scanf("%d",&height[i]);
    }
    int min=abs(height[n-1]-height[0]);
    s1=n;
    s2=1;
    for(int i=0;i<n-1;i++){
        dif=abs(height[i]-height[i+1]);
        if(dif<min){
            min=dif;
            s1=i+1;
            s2=i+1+1;
        }
    }
    printf("%d %d",s1,s2);
}