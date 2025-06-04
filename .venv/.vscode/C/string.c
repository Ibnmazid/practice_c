#include <Stdio.h>
#include <string.h>
int main(){
    char s1[100]="Fuad";
    char s2[100]="Fuad";
    //strcpy(s1,s2);
    //strcat(s1,s2);
    int i=strcmp(s1,s2);
    if (i==0)printf("String are same.");
    if(i!=0)printf("String are not same");
    //printf("%s",s1);


}