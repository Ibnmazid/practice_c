#include <stdio.h>

int main() {
    char borze[201];
    scanf("%s", borze);

    int i;
    for (i = 0; borze[i] != '\0'; i++) {
        if (borze[i] == '.') {
            printf("0");
        } 
        else if (borze[i] == '-' && borze[i + 1] == '.') {
            printf("1");
            i++;
        } 
        else if (borze[i] == '-' && borze[i + 1] == '-') {
            printf("2");
            i++; 
        }
    }
    
    return 0;
}
#include <stdio.h>
#include <string.h>
 
int main(){
    char borze[200];
    int opt[200];
    scanf("%s",borze);
    int i,index=0;
    
    for(i=0;borze[i]!='\0';i++){
        if((borze[i]=='-')&&(borze[i + 1] != '\0')&&(borze[i+1]=='-')){
            opt[index++]=2;
            i++;
        }
        else if((borze[i]=='-')&&(borze[i + 1] != '\0')&&(borze[i+1]=='.')){
            opt[index++]=1;
            i++;
        }
        else if(borze[i]=='.'){
            opt[index++]=0;
 
        }
    }
    for (i = 0; i < index; i++) {
        printf("%d", opt[i]);
    }
 
 
}