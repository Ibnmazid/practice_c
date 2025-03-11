#include <stdio.h>

void solve() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n, k;
        scanf("%d %d", &n, &k);
        
        int a[n + 1]; 
        
        if (k % 2 == 1) {
            
            for (int i = 1; i <= n; ++i) {
                if (i == n) {
                    a[i] = n - 1;  
                } else {
                    a[i] = n;
                }
            }
        } else {
            
            for (int i = 1; i <= n; ++i) {
                if (i == n) {
                    a[i] = n - 1;  
                } else {
                    a[i] = i + 1;
                }
            }
        }
        
        
        for (int i = 1; i <= n; ++i) {
            printf("%d ", a[i]);
        }
        printf("\n");
    }
}

int main() {
    solve();
    return 0;
}