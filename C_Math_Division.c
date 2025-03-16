#include <stdio.h>
#include <string.h>
#define MOD 1000000007


long long modExp(long long base, long long exp, long long mod) {
    long long result = 1;
    base %= mod;
    while(exp > 0) {
        if(exp & 1)
            result = (result * base) % mod;
        base = (base * base) % mod;
        exp >>= 1;
    }
    return result;
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        char s[100005];
        scanf("%s", s);
        
        
        if(n == 1){
            printf("0\n");
            continue;
        }
        
        
        long long R = 0;
        for(int i = 1; i < n; i++){
            R = (R * 2 + (s[i] - '0')) % MOD;
        }
        
        
        long long pow2 = modExp(2, n - 1, MOD);
        
        long long invPow2 = modExp(pow2, MOD - 2, MOD);
        
        long long ans = ((n - 1LL) % MOD + (R * invPow2) % MOD) % MOD;
        printf("%lld\n", ans);
    }
    return 0;
}
