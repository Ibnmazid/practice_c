#include <stdio.h>
#include <string.h>
int main(){
    char word[101];
    int upp=0,low=0;
    scanf("%s",word);
   
    int n=strlen(word);

   

    for(int i=0;i<n;i++){
        if(word[i]<91 && word[i]>64){
            upp++;
        }
        else if(word[i]<123 && word[i]>96){
            low++;
        }
    }
    
    if( upp>low){
        for(int i=0;i<n;i++){
            if(word[i]<123 && word[i]>96){
                word[i]=word[i]-32;
            }
            
        }

    }
    else{
        for(int i=0;i<n;i++){
            if(word[i]<91 && word[i]>64){
                word[i]=word[i]+32;
            }

        }
    }
    
    printf("%s",word);

}