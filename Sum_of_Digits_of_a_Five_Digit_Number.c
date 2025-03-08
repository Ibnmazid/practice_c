#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int rem,sum=0;
    for(int i=0;i<5;i++){
        rem=n%10;
        n=n/10;
        sum=rem+sum;
        
        
    }
    printf("%d",sum);
    

}