#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    
    while(t--) {
        int n, count = 0;
        scanf("%d", &n);
        int set[n * 2];
        
        for (int i = 0; i < 2 * n; i++) {
            scanf("%d", &set[i]);  
            if (set[i] % 2 != 0) {
                count++;
            }
        }
        
        if (count == n) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    }
    
    return 0;
}
