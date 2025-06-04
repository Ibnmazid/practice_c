#include <stdio.h>
#define MAX 100005
typedef struct {
    int count;
    int postion[100];
}data;

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    data freq[MAX]={0};
    
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        int val=arr[i];
        freq[val].postion[freq[val].count]=i+1;
        freq[val].count++;
    }
    int valid_count = 0;
    int result[MAX][2];
    for(int a=0;a<MAX;a++){
        if(freq[a].count>0){
            int d=0,valid=1;
            if(freq[a].count>1){
                d=freq[a].postion[1]-freq[a].postion[0];
                for(int j=2;j<freq[a].count;j++){
                    if(freq[a].postion[j]-freq[a].postion[j-1]!=d){
                        valid=0;
                        break;
                    }
                }
            }
            if(valid){
                result[valid_count][0]=a;
                result[valid_count][1] = (freq[a].count == 1) ? 0 : d;
                valid_count++;
            }
        }

    }
    printf("%d\n", valid_count);
    for (int i = 0; i < valid_count; i++) {
        printf("%d %d\n", result[i][0], result[i][1]);
    }


}