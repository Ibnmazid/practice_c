#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    
    while(t--) {
        long long n, k;
        scanf("%lld %lld", &n, &k);
        long long moves = 0;
        long long d;
        
        if(n % 2 == 0) {
            d = k - 1;
            moves = n / d;
            if(n % d != 0) moves++; 
        } else {
            if(n == k) {
                moves = 1;
            } else {
                n -= k;
                moves = 1;
                d = k - 1;
                moves += n / d;
                if(n % d != 0) moves++;
            }
        }
        printf("%lld\n", moves);
    }
    
    return 0;
}
