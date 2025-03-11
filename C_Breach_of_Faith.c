#include <stdio.h>
#include <stdlib.h>

// Function to compare two integers (for sorting)
int compare(const void *a, const void *b) {
    return (*(long long *)a - *(long long *)b);
}

void solve() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int m = 2 * n;
        long long b[m];
        for (int i = 0; i < m; i++) {
            scanf("%lld", &b[i]);
        }

        // Sort the sequence b
        qsort(b, m, sizeof(long long), compare);

        // Find the missing element
        long long missing = -1;
        for (int i = 0; i < m; i++) {
            if (b[i] != i + 1) {
                missing = i + 1;
                break;
            }
        }
        if (missing == -1) {
            missing = m + 1;
        }

        // Reconstruct the sequence a
        long long a[m + 1];
        int idx = 0;
        for (int i = 0; i < m; i++) {
            a[idx++] = b[i];
        }
        a[idx] = missing;

        // Sort the sequence a
        qsort(a, m + 1, sizeof(long long), compare);

        // Calculate the alternating sum
        long long sum = a[1];
        for (int i = 2; i < m + 1; i++) {
            if (i % 2 == 0) {
                sum -= a[i];
            } else {
                sum += a[i];
            }
        }

        // If the sum does not match a[0], adjust the sequence
        if (sum != a[0]) {
            // Swap a[0] with the missing element
            long long temp = a[0];
            a[0] = missing;
            missing = temp;
        }

        // Output the sequence a
        for (int i = 0; i < m + 1; i++) {
            printf("%lld ", a[i]);
        }
        printf("\n");
    }
}

int main() {
    solve();
    return 0;
}