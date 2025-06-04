#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int a[101], b[101];
    for(int i = 0; i < n; i++) {
        scanf("%d %d", &a[i], &b[i]);
    }
    
    int unopenableCount = 0;
    
    for(int j = 0; j < n; j++) {
        int canOpen = 0;
        
        for(int i = 0; i < n; i++) {
            if(i != j && b[i] == a[j]) {
                canOpen = 1;
                break;
            }
        }
        if(!canOpen) {
            unopenableCount++;
        }
    }
    
    printf("%d\n", unopenableCount);
    return 0;
}
#include <stdio.h>
int main(){
    int n,count=0;
    scanf("%d",&n);

    while(n--){
        int a,b;
        scanf("%d %d",&a ,&b);
        if(a==b)count++;
    }
    printf("%d",count);
}