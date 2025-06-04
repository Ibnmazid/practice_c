#include <stdio.h>
#include <stdlib.h>

int compare_ints(const void* a, const void* b) {
    int arg1 = *(const int*)a;
    int arg2 = *(const int*)b;
    return (arg1 > arg2) - (arg1 < arg2);
}

int find_ge(int* a, int m, int target) {
    int low = 0, high = m;
    while (low < high) {
        int mid = low + (high - low)/2;
        if (a[mid] >= target) {
            high = mid;
        } else {
            low = mid + 1;
        }
    }
    return low;
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n, m;
        scanf("%d %d", &n, &m);
        int* a = malloc(m * sizeof(int));
        for (int i = 0; i < m; i++) {
            scanf("%d", &a[i]);
        }
        qsort(a, m, sizeof(int), compare_ints);
        long long sum = 0;
        for (int k = 1; k < n; k++) {
            int l1 = k;
            int l2 = n - k;
            int idx1 = find_ge(a, m, l1);
            int count1 = m - idx1;
            int idx2 = find_ge(a, m, l2);
            int count2 = m - idx2;
            int max_l = (l1 > l2) ? l1 : l2;
            int idx3 = find_ge(a, m, max_l);
            int same = m - idx3;
            sum += (long long)count1 * count2 - same;
        }
        printf("%lld\n", sum);
        free(a);
    }
    return 0;
}