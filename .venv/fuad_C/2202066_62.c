#include <stdio.h>
int main(){
    int a,x=0,y;

    printf("Enter an Integer less than 1000>>");
    scanf("%d",&a);

    if(a<1||a>999){
        printf("Your input is out range.!");
    }
    else{
        x+=a%10;
        a=a/10;
        x+=a%10;
        a=a/10;
        x+=a;

    }
    printf("Sum:%d",x);
}