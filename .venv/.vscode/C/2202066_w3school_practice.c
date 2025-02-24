#include <stdio.h>
void second2hour(void);
void multiples(void);
int main(){
    //second2hour();
    multiples();
}

void second2hour(void){
    printf("Enter amount of second:");
    int amount ,hour,min,second;
    scanf("%d",&amount);

    hour=amount/3600;

    min=(amount-(hour*3600))/60;

    second=amount-(hour*3600)-(min*60);

    printf("%d H:%d M:%d S",hour,min,second);


}
void multiples(void){
    printf("Enter those number:");
    int x,y;
    scanf("%d %d",&x,&y);

    if(x%y==0){
        printf("%d is a multiple of %d\n",x,y);
    }
    else if(y%x==0){
        printf("%d is a multiple of %d\n",y,x);
    }
    else{
        printf("%d and %d is not multiple is other.",x,y);
    }
}