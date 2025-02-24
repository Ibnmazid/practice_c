#include <stdio.h>
int main(){
    int n1=0,n2=1,limit,fib;
    printf("Enter limit:");
    scanf("%d",&limit);
    printf("%d %d ",n1,n2);

    for(int i=0;i<limit;i++){
        fib=n1+n2;
        n1=n2;
        n2=fib;
        printf("%d ",fib);
        
    }
}