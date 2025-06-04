#include <stdio.h>
int main(){
    int n,i,number;
    printf("HOW many number You want to enter:");
    scanf("%d",&n);

    int even[n],odd[n];
    int even_sum=0,odd_sum=0;
    int odd_c=0,even_c=0;
    for(i=0;i<n;i++){
        scanf("%d",&number);
        if(number%2==0){
            even[even_c++]=number;
            even_sum+=number;
        }
        else{
            odd[odd_c++]=number;
            odd_sum+=number;
        }
    }
    printf("\nOdd numbers:");
    for(i=0;i<odd_c;i++){
        printf(" %d",odd[i]);
    }
    printf("\nEven numbers:");
    for(i=0;i<even_c;i++){
        printf(" %d",even[i]);
    }
    printf("\nSum of Odd Number:%d ",odd_sum);
    printf("\nSum of Even Number:%d\n",even_sum);
}
