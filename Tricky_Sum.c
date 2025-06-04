#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        long long n;
        scanf("%lld", &n);

    
        long long sum = (n * (n + 1)) / 2;
        long long p_sum = 0;

        
        for (long long p = 1; p <= n; p *= 2) {
            p_sum += p;
        }

       
        printf("%lld\n",sum - 2 * p_sum);
    }

    return 0;
}
