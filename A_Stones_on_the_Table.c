#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    char c[n];
    scanf("%s",c);
    int i,count=0;

    for(i=0;i<n;i++){
        if(c[i]==c[i+1]){
            count++;
        }
        
    }
    printf("%d",count);
}