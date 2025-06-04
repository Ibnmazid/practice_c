#include <stdio.h>
int main(){
    int n,city;
    scanf("%d",&n);
    int dis[n];
    
    for(int i=0;i<n;i++){
        scanf("%d",&dis[i]);
    }
    int min=dis[0];
    city=1;
    for(int i=1;i<n;i++){
        if(dis[i]<min){
            min=dis[i];
            city=i+1;
        }
        else if(dis[i]==min){
            city=0;
            
        
        }
    }
    if(city>=1){
        printf("%d",city);
    }
    else{
        printf("Still Rozdil");
    }
    

}