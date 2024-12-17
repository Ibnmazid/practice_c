#include <stdio.h>
int main(){
    float dis_cm,dis_in;

    printf("Enter the distence(cm):");
    scanf("%f",&dis_cm);

    dis_in=dis_cm*0.393701;
    //dis_in=dis_cm/2.54;
    printf("Distence in inch:%.2f",dis_in);

}