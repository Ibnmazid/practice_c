#include <stdio.h>
int add(int a,int b){
    return a+b;
}
int sub(int a,int b){
    return a-b;
}

int main(){
    int result=add(3,4);
    printf("sum:%d",result);
    int result2=sub(3,4);
    printf("\n sub:%d",result2);
}