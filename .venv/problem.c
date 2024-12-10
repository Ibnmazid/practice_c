#include <stdio.h>
int main(){
    int a,b,c;
    printf("Equation type: aX +bY = c\n");
    printf("Enter value of: a >>>");
    scanf("%d",&a);
    printf("Enter the value of: b >>>");
    scanf("%d",&b);
    printf("Enter the value of: c >>>");
    scanf("%d",&c);

    printf("Your equation is:  %dX + %dY = %d",a,b,c);
}