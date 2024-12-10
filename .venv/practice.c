#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14159265
#define Max 180

int main()
{
    float a,b;
    int angle;
    angle =0;
    printf("          Angle       cos(angle)\n \n");

    while(angle <=180){
        a=(PI/Max)*angle;
        b=cos(a);
        printf("%15d %13.4f\n",angle,b);
        angle=angle+10;
        
    }


}