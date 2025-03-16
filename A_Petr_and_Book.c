#include <stdio.h>
int main(){
    int n,i=0;
    scanf("%d",&n);
    int pages[7];
    int count=0;

    for(int j=0;j<7;j++){
        scanf("%d",&pages[j]);
    }
    while (count < n) {  
        count += pages[i]; 
        if (count >= n) break; 

        if (i == 6)
            i = 0;
        else
            i++;
    }


    printf("%d",i+1);
}