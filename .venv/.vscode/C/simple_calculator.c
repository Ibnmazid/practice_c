#include <stdio.h>
#include <string.h>
int main(){
    int a,b;
    char Oper;
    printf("Enter Your operation format(1+1):");
    scanf("%d %c %d",&a ,&Oper ,&b);

    switch (Oper)
    {
    case '+':
        printf("%d + %d = %d",a,b,a+b);
        break;
    case '-':
        printf("%d - %d = %d",a,b,a-b);
        break;
    case '*':
        printf("%d * %d = %d",a,b,a*b);
        break;
    case '/':
        printf("%d / %d = %d",a,b,a/b);
        break;
    
    default:
        printf("you Choose invalid oeration.!");
        break;
    }

}