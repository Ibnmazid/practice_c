#include <stdio.h>
//Time limit exceed
int main(){
    int n,q;
    scanf("%d %d",&n,&q);
    int numbers[n+1];
    for(int i=1;i<=n;i++){
        scanf("%d",&numbers[i]);
    }
    while(q--){
        int a1,a2,sum=0;
        scanf("%d %d",&a1,&a2);
        for(int i=a1;i<=a2;i++){
            sum+=numbers[i];
        }
        printf("%d\n",sum);
    }

}