#include <stdio.h>

void solve() {
    int n, x;
    scanf("%d %d", &n, &x);

    int a[n], sum = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        sum += a[i];
    }

    
    if (sum % n != 0) {
        printf("NO\n");
        return;
    }

    
    int target = sum / n;

    
    if (target == x) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        solve();
    }
    return 0;
}
