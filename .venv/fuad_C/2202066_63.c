#include <stdio.h>
int main(){
    int n,sum=0;

    printf("Enter the value of N:");
    scanf("%d",&n);

    if(n<1||n>100){
        printf("N is out of Range.!");
    }
    else {
        for(int i=1;i<=n;i++){
            sum+=i*i*i*i;
        }
        printf("sum:%d",sum);
    }
}