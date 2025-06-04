#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    // Generate Fibonacci numbers up to n.
    int fib[50];
    fib[0] = 0;
    fib[1] = 1;
    int count = 2;
    while (fib[count-1] < n) {
        fib[count] = fib[count-1] + fib[count-2];
        count++;
    }
    
    // Try every combination of three Fibonacci numbers.
    int found = 0;
    for (int i = 0; i < count; i++) {
        for (int j = 0; j < count; j++) {
            for (int k = 0; k < count; k++) {
                if (fib[i] + fib[j] + fib[k] == n) {
                    printf("%d %d %d\n", fib[i], fib[j], fib[k]);
                    found = 1;
                    break;
                }
            }
            if (found) break;
        }
        if (found) break;
    }
    
    // If no valid triple is found (should not happen as per problem statement).
    if (!found) {
        printf("I'm too stupid to solve this problem\n");
    }
    
    return 0;
}