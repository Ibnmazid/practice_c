#include <stdio.h>
int main(){
    int elements[6];
    int temp;

    for (int i=0;i<6;i++){
        printf("Enter the %d No. Element:",i+1);
        scanf("%d",&elements[i]);
    }
    printf("Orginal Array:");
    for(int i=0;i<6;i++){
        printf("%d ",elements[i]);
    }
    for(int i=0;i<3;i++){
        temp=elements[i];
        elements[i]=elements[5-i];
        elements[5-i]=temp;
    }
    printf("\nReversed Array:");
    for(int i=0;i<6;i++){
        
        printf("%d ",elements[i]);
    }

}