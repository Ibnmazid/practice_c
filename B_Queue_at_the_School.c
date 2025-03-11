#include <stdio.h>
int main(){
    int n,t,i;
    scanf("%d %d",&n,&t);
    char a[n+1];
    scanf("%s",a);

    while(t--){
        for(i=0;i<n-1;i++){
            if((a[i]=='B') &&( a[i+1]=='G')){
                a[i]='G';
                a[i+1]='B';
                i++;
            }
        }
    }
    printf("%s",a);
}