#include <stdio.h>
int arr(int a[],int n);

int main(){
    int a=5;
    int num[5]={1,2,3,4,5};
    printf("sum= %d",arr(num,a));


}
int arr(int a[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    return sum;
}